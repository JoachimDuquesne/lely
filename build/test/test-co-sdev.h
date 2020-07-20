#include <lely/co/sdev.h>

#define CO_SDEV_STRING(s)	s

const struct co_sdev test_co_sdev = {
	.id = 0xff,
	.name = NULL,
	.vendor_name = CO_SDEV_STRING("Lely Industries N.V."),
	.vendor_id = 0x00000360,
	.product_name = NULL,
	.product_code = 0x00000000,
	.revision = 0x00000000,
	.order_code = NULL,
	.baud = 0
		| CO_BAUD_1000
		| CO_BAUD_800
		| CO_BAUD_500
		| CO_BAUD_250
		| CO_BAUD_125
		| CO_BAUD_50
		| CO_BAUD_20
		| CO_BAUD_10,
	.rate = 0,
	.lss = 0,
	.dummy = 0x00000000,
	.nobj = 28,
	.objs = (const struct co_sobj[]){{
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("Device type"),
#endif
		.idx = 0x1000,
		.code = CO_OBJECT_VAR,
		.nsub = 1,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x01020304lu },
#endif
			.val = { .u32 = 0x01020304lu },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("Error register"),
#endif
		.idx = 0x1001,
		.code = CO_OBJECT_VAR,
		.nsub = 1,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error register"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("Identity object"),
#endif
		.idx = 0x1018,
		.code = CO_OBJECT_RECORD,
		.nsub = 5,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Highest sub-index supported"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = 0x04 },
#endif
			.val = { .u8 = 0x04 },
			.access = CO_ACCESS_CONST,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor-ID"),
#endif
			.subidx = 0x01,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x00000360lu },
#endif
			.val = { .u32 = 0x00000360lu },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code"),
#endif
			.subidx = 0x02,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision number"),
#endif
			.subidx = 0x03,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number"),
#endif
			.subidx = 0x04,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("BOOLEAN"),
#endif
		.idx = 0x2001,
		.code = CO_OBJECT_VAR,
		.nsub = 1,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("BOOLEAN"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_BOOLEAN,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .b = 0 },
			.max = { .b = 1 },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .b = 0 },
#endif
			.val = { .b = 1 },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("INTEGER8"),
#endif
		.idx = 0x2002,
		.code = CO_OBJECT_VAR,
		.nsub = 1,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("INTEGER8"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_INTEGER8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .i8 = CO_INTEGER8_MIN },
			.max = { .i8 = CO_INTEGER8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .i8 = 0 },
#endif
			.val = { .i8 = -127 },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("INTEGER16"),
#endif
		.idx = 0x2003,
		.code = CO_OBJECT_VAR,
		.nsub = 1,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("INTEGER16"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_INTEGER16,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .i16 = CO_INTEGER16_MIN },
			.max = { .i16 = CO_INTEGER16_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .i16 = 0 },
#endif
			.val = { .i16 = -32767 },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("INTEGER32"),
#endif
		.idx = 0x2004,
		.code = CO_OBJECT_VAR,
		.nsub = 1,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("INTEGER32"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_INTEGER32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .i32 = CO_INTEGER32_MIN },
			.max = { .i32 = CO_INTEGER32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .i32 = 0l },
#endif
			.val = { .i32 = -2147483647l },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("UNSIGNED8"),
#endif
		.idx = 0x2005,
		.code = CO_OBJECT_VAR,
		.nsub = 1,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("UNSIGNED8"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = 0x7f },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("UNSIGNED16"),
#endif
		.idx = 0x2006,
		.code = CO_OBJECT_VAR,
		.nsub = 1,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("UNSIGNED16"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_UNSIGNED16,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u16 = CO_UNSIGNED16_MIN },
			.max = { .u16 = CO_UNSIGNED16_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u16 = CO_UNSIGNED16_MIN },
#endif
			.val = { .u16 = 0x7fffu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("UNSIGNED32"),
#endif
		.idx = 0x2007,
		.code = CO_OBJECT_VAR,
		.nsub = 1,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("UNSIGNED32"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = 0x007ffffflu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("REAL32"),
#endif
		.idx = 0x2008,
		.code = CO_OBJECT_VAR,
		.nsub = 1,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("REAL32"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_REAL32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .r32 = CO_REAL32_MIN },
			.max = { .r32 = CO_REAL32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .r32 = 0 },
#endif
			.val = { .r32 = 3.14159274101257324219 },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("VISIBLE_STRING"),
#endif
		.idx = 0x2009,
		.code = CO_OBJECT_VAR,
		.nsub = 1,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("VISIBLE_STRING"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_VISIBLE_STRING,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .vs = NULL },
			.max = { .vs = NULL },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .vs = NULL },
#endif
			.val = { .vs = CO_VISIBLE_STRING_C("Hello, World!") },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("OCTET_STRING"),
#endif
		.idx = 0x200a,
		.code = CO_OBJECT_VAR,
		.nsub = 1,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("OCTET_STRING"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_OCTET_STRING,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .vs = NULL },
			.max = { .vs = NULL },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .vs = NULL },
#endif
			.val = { .vs = NULL },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("UNICODE_STRING"),
#endif
		.idx = 0x200b,
		.code = CO_OBJECT_VAR,
		.nsub = 1,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("UNICODE_STRING"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_UNICODE_STRING,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .us = NULL },
			.max = { .us = NULL },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .us = NULL },
#endif
			.val = { .us = CO_UNICODE_STRING_C({
				0x0048, 0x0065, 0x006c, 0x006c,
				0x006f, 0x002c, 0x0020, 0x0077,
				0x006f, 0x0072, 0x006c, 0x0064,
				0x0021, 0x0000
			}) },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("TIME_OF_DAY"),
#endif
		.idx = 0x200c,
		.code = CO_OBJECT_VAR,
		.nsub = 1,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("TIME_OF_DAY"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_TIME_OF_DAY,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .t = { .ms = 0x00000000, .days = 0x0000 } },
			.max = { .t = { .ms = 0x0fffffff, .days = 0xffff } },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .t = { .ms = 0x00000000, .days = 0x0000 } },
#endif
			.val = { .t = { .ms = 0x02932e00, .days = 0x016d } },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("TIME_DIFF"),
#endif
		.idx = 0x200d,
		.code = CO_OBJECT_VAR,
		.nsub = 1,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("TIME_DIFF"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_TIME_DIFF,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .t = { .ms = 0x00000000, .days = 0x0000 } },
			.max = { .t = { .ms = 0x0fffffff, .days = 0xffff } },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .t = { .ms = 0x00000000, .days = 0x0000 } },
#endif
			.val = { .t = { .ms = 0x02932e00, .days = 0x016d } },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("DOMAIN"),
#endif
		.idx = 0x200f,
		.code = CO_OBJECT_VAR,
		.nsub = 1,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("DOMAIN"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_DOMAIN,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .dom = NULL },
			.max = { .dom = NULL },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .dom = NULL },
#endif
			.val = { .dom = NULL },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("INTEGER24"),
#endif
		.idx = 0x2010,
		.code = CO_OBJECT_VAR,
		.nsub = 1,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("INTEGER24"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_INTEGER24,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .i24 = CO_INTEGER24_MIN },
			.max = { .i24 = CO_INTEGER24_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .i24 = 0l },
#endif
			.val = { .i24 = -8388607l },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("REAL64"),
#endif
		.idx = 0x2011,
		.code = CO_OBJECT_VAR,
		.nsub = 1,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("REAL64"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_REAL64,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .r64 = CO_REAL64_MIN },
			.max = { .r64 = CO_REAL64_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .r64 = 0 },
#endif
			.val = { .r64 = 3.141592653589793116 },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("INTEGER40"),
#endif
		.idx = 0x2012,
		.code = CO_OBJECT_VAR,
		.nsub = 1,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("INTEGER40"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_INTEGER40,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { CO_INTEGER40_MIN },
			.max = { CO_INTEGER40_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .i40 = 0ll },
#endif
			.val = { .i40 = -549755813887ll },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("INTEGER48"),
#endif
		.idx = 0x2013,
		.code = CO_OBJECT_VAR,
		.nsub = 1,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("INTEGER48"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_INTEGER48,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .i48 = CO_INTEGER48_MIN },
			.max = { .i48 = CO_INTEGER48_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .i48 = 0ll },
#endif
			.val = { .i48 = -140737488355327ll },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("INTEGER56"),
#endif
		.idx = 0x2014,
		.code = CO_OBJECT_VAR,
		.nsub = 1,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("INTEGER56"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_INTEGER56,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .i56 = CO_INTEGER56_MIN },
			.max = { .i56 = CO_INTEGER56_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .i56 = 0ll },
#endif
			.val = { .i56 = -36028797018963967ll },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("INTEGER64"),
#endif
		.idx = 0x2015,
		.code = CO_OBJECT_VAR,
		.nsub = 1,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("INTEGER64"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_INTEGER64,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .i64 = CO_INTEGER64_MIN },
			.max = { .i64 = CO_INTEGER64_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .i64 = 0ll },
#endif
			.val = { .i64 = -9223372036854775807ll },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("UNSIGNED24"),
#endif
		.idx = 0x2016,
		.code = CO_OBJECT_VAR,
		.nsub = 1,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("UNSIGNED24"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_UNSIGNED24,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u24 = CO_UNSIGNED24_MIN },
			.max = { .u24 = CO_UNSIGNED24_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u24 = CO_UNSIGNED24_MIN },
#endif
			.val = { .u24 = 0x7ffffflu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("UNSIGNED40"),
#endif
		.idx = 0x2018,
		.code = CO_OBJECT_VAR,
		.nsub = 1,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("UNSIGNED40"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_UNSIGNED40,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u40 = CO_UNSIGNED40_MIN },
			.max = { .u40 = CO_UNSIGNED40_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u40 = CO_UNSIGNED40_MIN },
#endif
			.val = { .u40 = 0x7fffffffffllu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("UNSIGNED48"),
#endif
		.idx = 0x2019,
		.code = CO_OBJECT_VAR,
		.nsub = 1,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("UNSIGNED48"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_UNSIGNED48,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u48 = CO_UNSIGNED48_MIN },
			.max = { .u48 = CO_UNSIGNED48_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u48 = CO_UNSIGNED48_MIN },
#endif
			.val = { .u48 = 0x7fffffffffffllu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("UNSIGNED56"),
#endif
		.idx = 0x201a,
		.code = CO_OBJECT_VAR,
		.nsub = 1,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("UNSIGNED56"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_UNSIGNED56,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u56 = CO_UNSIGNED56_MIN },
			.max = { .u56 = CO_UNSIGNED56_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u56 = CO_UNSIGNED56_MIN },
#endif
			.val = { .u56 = 0x7fffffffffffffllu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("UNSIGNED64"),
#endif
		.idx = 0x201b,
		.code = CO_OBJECT_VAR,
		.nsub = 1,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("UNSIGNED64"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_UNSIGNED64,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u64 = CO_UNSIGNED64_MIN },
			.max = { .u64 = CO_UNSIGNED64_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u64 = CO_UNSIGNED64_MIN },
#endif
			.val = { .u64 = 0x7fffffffffffffffllu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}}
};

