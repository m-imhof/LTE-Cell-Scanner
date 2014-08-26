An OpenCL accelerated TDD/FDD LTE Scanner (from A/D samples to PDSCH output. LTE RRC ASN1 messages decoded). By Jiao Xianjun (putaoshu@gmail.com).

Tech blog: http://sdr-x.github.io

-------------------------------News:----------------------------------

**14 Aug. 2014: Losing job. Finding new opportunity! (Find my profile at <a href="https://www.researchgate.net/profile/Xianjun_Jiao?ev=hdr_xprf">researchgate</a> and <a href="http://www.linkedin.com/pub/xianjun-jiao/41/696/7a5">linkedin</a>)**

2014-07: Now Matlab can parse SIB automatically by calling asn1c. See doc in asn1_test and http://sdr-x.github.io/LTE-SIB-decoding-by-asn1c/ . (Don't forget compling the progname in your own computer!)

2014-06: SIB message (output by LTE_DL_receiver.m) is decoded successfully! See Matlab/*SIB.txt.

2014-05: 20MHz LTE PDCCH DCI format1A for SI-RNTI has been detected successfully from HACKRF captured signal, and corresponding SIB PDSCH constellation is shown. Run: Matlab/LTE_DL_receiver.m
 (http://youtu.be/2JH_EGdHyYE  http://v.youku.com/v_show/id_XNzE3NDYwMDgw.html)

----------------------------------------------------------------------

Before explore this LTE Scanner, it's better for you to do some homeworks:

1. Original FDD only LTE Cell Scanner / Tracker: https://github.com/Evrytania/LTE-Cell-Scanner , by James Peroulas.

2. rtl-sdr ultra cheap USB TV dongle: http://sdr.osmocom.org/trac/wiki/rtl-sdr

3. hackrf board: http://greatscottgadgets.com/hackrf/ , https://github.com/mossmann/hackrf

COMPATIBLE rtl-sdr and hackrf version:
librtlsdr (https://github.com/steve-m/librtlsdr) release v0.5.2 (Not v0.5.3 at least for my computer)
libhackrf (https://github.com/mossmann/hackrf  ) revision around 2014 April 1st.

ATTENTION!!! Please use release version instead of dev trunk if you want a 100% workable program.

ATTENTION!!! If you got -4(CL_MEM_OBJECT_ALLOCATION_FAILURE) or -5(CL_OUT_OF_RESOURCES) error in some OpenCL platform-device, try smaller PPM value to narrow frequency offset range (only valid in original twist mode: -t).

MATLAB algorithm study and experiments are in : https://github.com/JiaoXianjun/rtl-sdr-LTE . Moved to Matlab dir this repo now.

See TODO if you want to contribute. Any questions or interests, feel free to contact me. putaoshu@gmail.com

Introduction video: (inside China) http://v.youku.com/v_show/id_XNjk3Mjc1MTUy.html ,
(outside China) http://www.youtube.com/watch?v=3hnlrYtjI-4

Introduction video before: (inside China) http://pan.baidu.com/s/1o6qbLGY ,
(outside China) http://www.youtube.com/watch?v=SxZzEVEKuRs

Introduction video before: (inside China) http://v.youku.com/v_show/id_XNjc1MjIzMDEy.html ,
(outside China) http://www.youtube.com/watch?v=4zRLgxzn4Pc

----------------------------------------------------------------------
New features and Usages
----------------------------------------------------------------------

"CellSearch --help" to see all options.

1. ----------------------OpenCL support----------------------

"cd LTE-Cell-Scanner"

"mkdir build"

"cd build"

"cmake ../"

(Before cmake, the build directory should better be cleaned.)

In default, "cmake ../" tries to find and use OpenCL to get speedup.

"cmake .. -DUSE_OPENCL=0" forces not to use OpenCL.

So, make sure OpenCL SDK has been installed in your system correctly, if you want LTE Scanner accelerated.

Intel, AMD, Nvidia, they all have free OpenCL SDK for their CPU/GPUs. There are also some other open source OpenCLs SDK,
such as pocl - Portable Computing Language (https://github.com/pocl/pocl)

"make" to generate executable program.

Before run test, those kernel files (src/*.cl) should be put together with executable program or in $PATH.
Because they need to be compiled and executed by OpenCL runtime after program launch.

Run test:

"CellSearch --loadbin test/f1890_s1.92_g0_0.16s.bin --opencl-platform=0 --opencl-device=0 --filter-workitem=32 --xcorr-workitem=2"

OpenCL platform and device are specified by "--opencl-platform=idx1 --opencl-device=idx2" to decide which CPU/GPU is used.
When program runs, it tells you how many platforms are detected in total. Default index is 0.

Number of workitems for 6RB channel filter kernel can be specified by "--filter-workitem". Default value is 32.

Number of workitems in the 1st NDrange dimension for PSS frequency-time correlation kernel can be specified by "--xcorr-workitem".
(ATTENTION!!! Now it is omitted because #define FILTER_MCHN_SIMPLE_KERNEL in searcher.h. Turn the pre-define off to use "--xcorr-workitem")
Default value is 2. Number of workitems of PSS correlation'2nd-NDrange-dimension depends on PPM range (use "-p" to change it).

Optimal number of workitems is platform-device dependent. Optimal values should be found according to your computer configuration.

2. -----TDD, ext-LNB/mixer, pre-search algorithm improvement----

"CellSearch --freq-start 1860e6 -t"

"-t" forces program into original carrier-sampling-clock twisted mode. Without "-t" leads to non-twisted mode (default mode).

Default mode supports external LNB and fast pre-search.
See detailed explanation in https://github.com/JiaoXianjun/rtl-sdr-LTE , and videos: (inside China): http://v.youku.com/v_show/id_XNjc1MjIzMDEy.html ,
 (outside China): http://www.youtube.com/watch?v=4zRLgxzn4Pc )

"CellSearch --loadbin test/f1890_s1.92_g0_0.16s.bin --num-reserve=4"

"--num-reserve" specifies how many frequency-PPM pairs are reserved in search process. Default value is 1.

3. --------Capture and reload rtl-sdr raw uint8 bin file--------

"CellSearch --freq-start 1860e6 --recbin a.bin" saves signal in file a.bin while doing cell search at frequency 1.86GHz

"CellSearch --loadbin test/f1890_s1.92_g0_0.16s.bin" searches LTE cell in captured bin file test/f1890_s1.92_g0_0.16s.bin

4. ------------Multiple tries at one frequency point------------

"CellSearch test/noise.bin --num-try 10" performs 10 tries of searching at frequency 1.86GHz (When signal is weak, only one try may not have you good luck)

5. ----------------------HACKRF support-------------------------

Make sure hackrf host software (libhackrf) has been installed.

Program will select presented hardware automatically when it runs.

If both rtl-sdr and hackrf are presented, use "-i 1000" to force using hackrf, use "-i" in normal way to use rtl-sdr.

6. ----------------------manual gain mode-----------------------

Use "-g X" to set gain value X to hardware.

Default value for rtl-sdr dongle is 0, which means AGC on.

Default value for hackrf is 40.

If CellSearch reports like "input level: avg abs(real) 0.00594959 avg abs(imag) 0.00614887", where the numbers are far below 1, larger gain value should be considered.

Original Readme of James Peroulas's LTE Cell Scanner / Tracker
========================================================================

--------------------------
LTE Cell Scanner / Tracker
--------------------------

This is a collection of tools to locate and track LTE basestation cells using
very low performance RF front ends. For example, these tools work with RTL2832
based dongles (E4000, R820T, etc.) which have a noise figure of 20dB, only 8
bits in the A/D, and a crystal with a frequency error of about 100 ppm.

The 'CellSearch' program can be used to search for LTE carriers within a range
of frequencies.  Once an LTE frequency has been located, 'LTE-Tracker' can be
used to monitor and track, in realtime, any LTE cells on that frequency.

The main documentation in html format can be found on the web at:
  http://www.evrytania.com/lte-tools
And in the doc/index.html subdirectory of this distribution.

For questions, comments, or bug reports, contact James Peroulas
james@evrytania.com, or check the bugtracker on github:
  https://github.com/Evrytania/LTE-Cell-Scanner/issues

------
Quick build instructions:
------
  cd LTE-Cell-Scanner
  mkdir build
  cd build
  cmake ..
  make

------
Install:
------
  sudo make install

------
Quick usage instructions:
------

Search for LTE carriers within a common LTE frequency range used in the US:
  CellSearch --freq-start 715e6 --freq-end 768e6

Start tracking LTE cells on frequency 739 MHz:
  LTE-Tracker -f 739000000

