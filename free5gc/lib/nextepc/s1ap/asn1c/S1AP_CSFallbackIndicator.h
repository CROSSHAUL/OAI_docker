/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../support/r14.4.0/36413-e40.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_S1AP_CSFallbackIndicator_H_
#define	_S1AP_CSFallbackIndicator_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_CSFallbackIndicator {
	S1AP_CSFallbackIndicator_cs_fallback_required	= 0,
	/*
	 * Enumeration is extensible
	 */
	S1AP_CSFallbackIndicator_cs_fallback_high_priority	= 1
} e_S1AP_CSFallbackIndicator;

/* S1AP_CSFallbackIndicator */
typedef long	 S1AP_CSFallbackIndicator_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_CSFallbackIndicator;
asn_struct_free_f S1AP_CSFallbackIndicator_free;
asn_struct_print_f S1AP_CSFallbackIndicator_print;
asn_constr_check_f S1AP_CSFallbackIndicator_constraint;
ber_type_decoder_f S1AP_CSFallbackIndicator_decode_ber;
der_type_encoder_f S1AP_CSFallbackIndicator_encode_der;
xer_type_decoder_f S1AP_CSFallbackIndicator_decode_xer;
xer_type_encoder_f S1AP_CSFallbackIndicator_encode_xer;
oer_type_decoder_f S1AP_CSFallbackIndicator_decode_oer;
oer_type_encoder_f S1AP_CSFallbackIndicator_encode_oer;
per_type_decoder_f S1AP_CSFallbackIndicator_decode_uper;
per_type_encoder_f S1AP_CSFallbackIndicator_encode_uper;
per_type_decoder_f S1AP_CSFallbackIndicator_decode_aper;
per_type_encoder_f S1AP_CSFallbackIndicator_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_CSFallbackIndicator_H_ */
#include <asn_internal.h>
