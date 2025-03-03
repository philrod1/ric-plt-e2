/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-IEs"
 * 	found in "e2ap-v01.01.00.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example`
 */

#include "E2nodeComponentConfigUpdateNGeNB.h"

asn_TYPE_member_t asn_MBR_E2nodeComponentConfigUpdateNGeNB_1[] = {
	{ ATF_POINTER, 2, offsetof(struct E2nodeComponentConfigUpdateNGeNB, ngAPconfigUpdate),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ngAPconfigUpdate"
		},
	{ ATF_POINTER, 1, offsetof(struct E2nodeComponentConfigUpdateNGeNB, xnAPconfigUpdate),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"xnAPconfigUpdate"
		},
};
static const int asn_MAP_E2nodeComponentConfigUpdateNGeNB_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_E2nodeComponentConfigUpdateNGeNB_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_E2nodeComponentConfigUpdateNGeNB_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ngAPconfigUpdate */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* xnAPconfigUpdate */
};
asn_SEQUENCE_specifics_t asn_SPC_E2nodeComponentConfigUpdateNGeNB_specs_1 = {
	sizeof(struct E2nodeComponentConfigUpdateNGeNB),
	offsetof(struct E2nodeComponentConfigUpdateNGeNB, _asn_ctx),
	asn_MAP_E2nodeComponentConfigUpdateNGeNB_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_E2nodeComponentConfigUpdateNGeNB_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_E2nodeComponentConfigUpdateNGeNB = {
	"E2nodeComponentConfigUpdateNGeNB",
	"E2nodeComponentConfigUpdateNGeNB",
	&asn_OP_SEQUENCE,
	asn_DEF_E2nodeComponentConfigUpdateNGeNB_tags_1,
	sizeof(asn_DEF_E2nodeComponentConfigUpdateNGeNB_tags_1)
		/sizeof(asn_DEF_E2nodeComponentConfigUpdateNGeNB_tags_1[0]), /* 1 */
	asn_DEF_E2nodeComponentConfigUpdateNGeNB_tags_1,	/* Same as above */
	sizeof(asn_DEF_E2nodeComponentConfigUpdateNGeNB_tags_1)
		/sizeof(asn_DEF_E2nodeComponentConfigUpdateNGeNB_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_E2nodeComponentConfigUpdateNGeNB_1,
	2,	/* Elements count */
	&asn_SPC_E2nodeComponentConfigUpdateNGeNB_specs_1	/* Additional specs */
};

