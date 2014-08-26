/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-c10.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#include "CSI-RS-Config-r10.h"

static int
antennaPortsCount_r10_5_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
antennaPortsCount_r10_5_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
antennaPortsCount_r10_5_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	antennaPortsCount_r10_5_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
antennaPortsCount_r10_5_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	antennaPortsCount_r10_5_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
antennaPortsCount_r10_5_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	antennaPortsCount_r10_5_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
antennaPortsCount_r10_5_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	antennaPortsCount_r10_5_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
antennaPortsCount_r10_5_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	antennaPortsCount_r10_5_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
antennaPortsCount_r10_5_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	antennaPortsCount_r10_5_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
antennaPortsCount_r10_5_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	antennaPortsCount_r10_5_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
antennaPortsCount_r10_5_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	antennaPortsCount_r10_5_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
memb_resourceConfig_r10_constraint_4(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 31)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_subframeConfig_r10_constraint_4(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 154)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_p_C_r10_constraint_4(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -8 && value <= 15)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_zeroTxPowerResourceConfigList_r10_constraint_15(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 16)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_zeroTxPowerSubframeConfig_r10_constraint_15(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 154)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_antennaPortsCount_r10_constr_5 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_resourceConfig_r10_constr_10 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_subframeConfig_r10_constr_11 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  154 }	/* (0..154) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_p_C_r10_constr_12 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5, -8,  15 }	/* (-8..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_csi_RS_r10_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_zeroTxPowerResourceConfigList_r10_constr_16 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  16,  16 }	/* (SIZE(16..16)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_zeroTxPowerSubframeConfig_r10_constr_17 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  154 }	/* (0..154) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_zeroTxPowerCSI_RS_r10_constr_13 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_antennaPortsCount_r10_value2enum_5[] = {
	{ 0,	3,	"an1" },
	{ 1,	3,	"an2" },
	{ 2,	3,	"an4" },
	{ 3,	3,	"an8" }
};
static unsigned int asn_MAP_antennaPortsCount_r10_enum2value_5[] = {
	0,	/* an1(0) */
	1,	/* an2(1) */
	2,	/* an4(2) */
	3	/* an8(3) */
};
static asn_INTEGER_specifics_t asn_SPC_antennaPortsCount_r10_specs_5 = {
	asn_MAP_antennaPortsCount_r10_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_antennaPortsCount_r10_enum2value_5,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_antennaPortsCount_r10_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_antennaPortsCount_r10_5 = {
	"antennaPortsCount-r10",
	"antennaPortsCount-r10",
	antennaPortsCount_r10_5_free,
	antennaPortsCount_r10_5_print,
	antennaPortsCount_r10_5_constraint,
	antennaPortsCount_r10_5_decode_ber,
	antennaPortsCount_r10_5_encode_der,
	antennaPortsCount_r10_5_decode_xer,
	antennaPortsCount_r10_5_encode_xer,
	antennaPortsCount_r10_5_decode_uper,
	antennaPortsCount_r10_5_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_antennaPortsCount_r10_tags_5,
	sizeof(asn_DEF_antennaPortsCount_r10_tags_5)
		/sizeof(asn_DEF_antennaPortsCount_r10_tags_5[0]) - 1, /* 1 */
	asn_DEF_antennaPortsCount_r10_tags_5,	/* Same as above */
	sizeof(asn_DEF_antennaPortsCount_r10_tags_5)
		/sizeof(asn_DEF_antennaPortsCount_r10_tags_5[0]), /* 2 */
	&asn_PER_type_antennaPortsCount_r10_constr_5,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_antennaPortsCount_r10_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_RS_Config_r10__csi_RS_r10__setup, antennaPortsCount_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_antennaPortsCount_r10_5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"antennaPortsCount-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_RS_Config_r10__csi_RS_r10__setup, resourceConfig_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_resourceConfig_r10_constraint_4,
		&asn_PER_memb_resourceConfig_r10_constr_10,
		0,
		"resourceConfig-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_RS_Config_r10__csi_RS_r10__setup, subframeConfig_r10),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_subframeConfig_r10_constraint_4,
		&asn_PER_memb_subframeConfig_r10_constr_11,
		0,
		"subframeConfig-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_RS_Config_r10__csi_RS_r10__setup, p_C_r10),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_p_C_r10_constraint_4,
		&asn_PER_memb_p_C_r10_constr_12,
		0,
		"p-C-r10"
		},
};
static ber_tlv_tag_t asn_DEF_setup_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_setup_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* antennaPortsCount-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* resourceConfig-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* subframeConfig-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* p-C-r10 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_4 = {
	sizeof(struct CSI_RS_Config_r10__csi_RS_r10__setup),
	offsetof(struct CSI_RS_Config_r10__csi_RS_r10__setup, _asn_ctx),
	asn_MAP_setup_tag2el_4,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_4 = {
	"setup",
	"setup",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_setup_tags_4,
	sizeof(asn_DEF_setup_tags_4)
		/sizeof(asn_DEF_setup_tags_4[0]) - 1, /* 1 */
	asn_DEF_setup_tags_4,	/* Same as above */
	sizeof(asn_DEF_setup_tags_4)
		/sizeof(asn_DEF_setup_tags_4[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_setup_4,
	4,	/* Elements count */
	&asn_SPC_setup_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_csi_RS_r10_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_RS_Config_r10__csi_RS_r10, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_RS_Config_r10__csi_RS_r10, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"setup"
		},
};
static asn_TYPE_tag2member_t asn_MAP_csi_RS_r10_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_csi_RS_r10_specs_2 = {
	sizeof(struct CSI_RS_Config_r10__csi_RS_r10),
	offsetof(struct CSI_RS_Config_r10__csi_RS_r10, _asn_ctx),
	offsetof(struct CSI_RS_Config_r10__csi_RS_r10, present),
	sizeof(((struct CSI_RS_Config_r10__csi_RS_r10 *)0)->present),
	asn_MAP_csi_RS_r10_tag2el_2,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_csi_RS_r10_2 = {
	"csi-RS-r10",
	"csi-RS-r10",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_csi_RS_r10_constr_2,
	asn_MBR_csi_RS_r10_2,
	2,	/* Elements count */
	&asn_SPC_csi_RS_r10_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_15[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_RS_Config_r10__zeroTxPowerCSI_RS_r10__setup, zeroTxPowerResourceConfigList_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_zeroTxPowerResourceConfigList_r10_constraint_15,
		&asn_PER_memb_zeroTxPowerResourceConfigList_r10_constr_16,
		0,
		"zeroTxPowerResourceConfigList-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_RS_Config_r10__zeroTxPowerCSI_RS_r10__setup, zeroTxPowerSubframeConfig_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_zeroTxPowerSubframeConfig_r10_constraint_15,
		&asn_PER_memb_zeroTxPowerSubframeConfig_r10_constr_17,
		0,
		"zeroTxPowerSubframeConfig-r10"
		},
};
static ber_tlv_tag_t asn_DEF_setup_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_setup_tag2el_15[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* zeroTxPowerResourceConfigList-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* zeroTxPowerSubframeConfig-r10 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_15 = {
	sizeof(struct CSI_RS_Config_r10__zeroTxPowerCSI_RS_r10__setup),
	offsetof(struct CSI_RS_Config_r10__zeroTxPowerCSI_RS_r10__setup, _asn_ctx),
	asn_MAP_setup_tag2el_15,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_15 = {
	"setup",
	"setup",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_setup_tags_15,
	sizeof(asn_DEF_setup_tags_15)
		/sizeof(asn_DEF_setup_tags_15[0]) - 1, /* 1 */
	asn_DEF_setup_tags_15,	/* Same as above */
	sizeof(asn_DEF_setup_tags_15)
		/sizeof(asn_DEF_setup_tags_15[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_setup_15,
	2,	/* Elements count */
	&asn_SPC_setup_specs_15	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_zeroTxPowerCSI_RS_r10_13[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_RS_Config_r10__zeroTxPowerCSI_RS_r10, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_RS_Config_r10__zeroTxPowerCSI_RS_r10, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_15,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"setup"
		},
};
static asn_TYPE_tag2member_t asn_MAP_zeroTxPowerCSI_RS_r10_tag2el_13[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_zeroTxPowerCSI_RS_r10_specs_13 = {
	sizeof(struct CSI_RS_Config_r10__zeroTxPowerCSI_RS_r10),
	offsetof(struct CSI_RS_Config_r10__zeroTxPowerCSI_RS_r10, _asn_ctx),
	offsetof(struct CSI_RS_Config_r10__zeroTxPowerCSI_RS_r10, present),
	sizeof(((struct CSI_RS_Config_r10__zeroTxPowerCSI_RS_r10 *)0)->present),
	asn_MAP_zeroTxPowerCSI_RS_r10_tag2el_13,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_zeroTxPowerCSI_RS_r10_13 = {
	"zeroTxPowerCSI-RS-r10",
	"zeroTxPowerCSI-RS-r10",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_zeroTxPowerCSI_RS_r10_constr_13,
	asn_MBR_zeroTxPowerCSI_RS_r10_13,
	2,	/* Elements count */
	&asn_SPC_zeroTxPowerCSI_RS_r10_specs_13	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_CSI_RS_Config_r10_1[] = {
	{ ATF_POINTER, 2, offsetof(struct CSI_RS_Config_r10, csi_RS_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_csi_RS_r10_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"csi-RS-r10"
		},
	{ ATF_POINTER, 1, offsetof(struct CSI_RS_Config_r10, zeroTxPowerCSI_RS_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_zeroTxPowerCSI_RS_r10_13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"zeroTxPowerCSI-RS-r10"
		},
};
static int asn_MAP_CSI_RS_Config_r10_oms_1[] = { 0, 1 };
static ber_tlv_tag_t asn_DEF_CSI_RS_Config_r10_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_CSI_RS_Config_r10_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* csi-RS-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* zeroTxPowerCSI-RS-r10 */
};
static asn_SEQUENCE_specifics_t asn_SPC_CSI_RS_Config_r10_specs_1 = {
	sizeof(struct CSI_RS_Config_r10),
	offsetof(struct CSI_RS_Config_r10, _asn_ctx),
	asn_MAP_CSI_RS_Config_r10_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_CSI_RS_Config_r10_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_CSI_RS_Config_r10 = {
	"CSI-RS-Config-r10",
	"CSI-RS-Config-r10",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_CSI_RS_Config_r10_tags_1,
	sizeof(asn_DEF_CSI_RS_Config_r10_tags_1)
		/sizeof(asn_DEF_CSI_RS_Config_r10_tags_1[0]), /* 1 */
	asn_DEF_CSI_RS_Config_r10_tags_1,	/* Same as above */
	sizeof(asn_DEF_CSI_RS_Config_r10_tags_1)
		/sizeof(asn_DEF_CSI_RS_Config_r10_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_CSI_RS_Config_r10_1,
	2,	/* Elements count */
	&asn_SPC_CSI_RS_Config_r10_specs_1	/* Additional specs */
};

