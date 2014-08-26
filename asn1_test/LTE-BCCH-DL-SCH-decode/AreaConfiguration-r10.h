/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-c10.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_AreaConfiguration_r10_H_
#define	_AreaConfiguration_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CellGlobalIdList-r10.h"
#include "TrackingAreaCodeList-r10.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AreaConfiguration_r10_PR {
	AreaConfiguration_r10_PR_NOTHING,	/* No components present */
	AreaConfiguration_r10_PR_cellGlobalIdList_r10,
	AreaConfiguration_r10_PR_trackingAreaCodeList_r10
} AreaConfiguration_r10_PR;

/* AreaConfiguration-r10 */
typedef struct AreaConfiguration_r10 {
	AreaConfiguration_r10_PR present;
	union AreaConfiguration_r10_u {
		CellGlobalIdList_r10_t	 cellGlobalIdList_r10;
		TrackingAreaCodeList_r10_t	 trackingAreaCodeList_r10;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AreaConfiguration_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AreaConfiguration_r10;

#ifdef __cplusplus
}
#endif

#endif	/* _AreaConfiguration_r10_H_ */
#include <asn_internal.h>
