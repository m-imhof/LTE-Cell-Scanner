% Jiao Xianjun (putaoshu@msn.com; putaoshu@gmail.com)
% generate frequency domain PSS and time domain PSS signal
% A script of project: https://github.com/JiaoXianjun/rtl-sdr-LTE

function [fd_pss, td_pss] = pss_gen
% @1.92MHz BW, 128 Total Subcarriers, 52 Guard Subcarriers, 76 Occupied Subcarriers
fd_pss = zeros(128,3); 
td_pss = zeros(128+9,3);
for i=1:3
    % Generate one of 3 Zadoff-Chu sequences for the possible PSS Value
    temp=pss(i-1);
    % PSS Generates 62 Subcarriers (Not Including DC), Leaving 66 Zeros
    % (DC and Guard Subcarriers)
    fd_pss(:,i)=[0 temp(32:end) zeros(1,65) temp(1:31)].';
    % Normalize Energy by Occupied Subcarriers
    temp_td=idft(fd_pss(:,i))*sqrt(128/62);
    % Add a Cyclic Prefix, But 9 Samples?...
    td_pss(:,i)=[temp_td(end-8:end); temp_td];
end
