/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-PDU-Contents"
 * 	found in "../support/r14.4.0/38413-e40.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_NGAP_UE_associatedLogicalNG_ConnectionListRes_H_
#define	_NGAP_UE_associatedLogicalNG_ConnectionListRes_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NGAP_ProtocolIE_SingleContainer;

/* NGAP_UE-associatedLogicalNG-ConnectionListRes */
typedef struct NGAP_UE_associatedLogicalNG_ConnectionListRes {
	A_SEQUENCE_OF(struct NGAP_ProtocolIE_SingleContainer) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_UE_associatedLogicalNG_ConnectionListRes_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_UE_associatedLogicalNG_ConnectionListRes;
extern asn_SET_OF_specifics_t asn_SPC_NGAP_UE_associatedLogicalNG_ConnectionListRes_specs_1;
extern asn_TYPE_member_t asn_MBR_NGAP_UE_associatedLogicalNG_ConnectionListRes_1[1];
extern asn_per_constraints_t asn_PER_type_NGAP_UE_associatedLogicalNG_ConnectionListRes_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_UE_associatedLogicalNG_ConnectionListRes_H_ */
#include <asn_internal.h>
