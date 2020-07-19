/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/r14.4.0/38413-e40.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_NGAP_EventType_H_
#define	_NGAP_EventType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NGAP_EventType {
	NGAP_EventType_direct	= 0,
	NGAP_EventType_change_of_serve_cell	= 1,
	NGAP_EventType_ue_presence_in_area_of_interest	= 2,
	NGAP_EventType_stop_change_of_serve_cell	= 3,
	NGAP_EventType_stop_ue_presence_in_area_of_interest	= 4,
	NGAP_EventType_cancel_location_reporting_for_the_ue	= 5
	/*
	 * Enumeration is extensible
	 */
} e_NGAP_EventType;

/* NGAP_EventType */
typedef long	 NGAP_EventType_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NGAP_EventType_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NGAP_EventType;
extern const asn_INTEGER_specifics_t asn_SPC_EventType_specs_1;
asn_struct_free_f EventType_free;
asn_struct_print_f EventType_print;
asn_constr_check_f EventType_constraint;
ber_type_decoder_f EventType_decode_ber;
der_type_encoder_f EventType_encode_der;
xer_type_decoder_f EventType_decode_xer;
xer_type_encoder_f EventType_encode_xer;
oer_type_decoder_f EventType_decode_oer;
oer_type_encoder_f EventType_encode_oer;
per_type_decoder_f EventType_decode_uper;
per_type_encoder_f EventType_encode_uper;
per_type_decoder_f EventType_decode_aper;
per_type_encoder_f EventType_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_EventType_H_ */
#include <asn_internal.h>
