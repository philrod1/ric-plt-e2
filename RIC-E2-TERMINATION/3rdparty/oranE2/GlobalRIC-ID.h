/*
 *
 * Copyright 2020 AT&T Intellectual Property
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-IEs"
 * 	found in "e2ap-v01.01.00.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example`
 */

#ifndef	_GlobalRIC_ID_H_
#define	_GlobalRIC_ID_H_


#include "asn_application.h"

/* Including external dependencies */
#include "PLMN-Identity.h"
#include "BIT_STRING.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* GlobalRIC-ID */
typedef struct GlobalRIC_ID {
	PLMN_Identity_t	 pLMN_Identity;
	BIT_STRING_t	 ric_ID;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GlobalRIC_ID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GlobalRIC_ID;
extern asn_SEQUENCE_specifics_t asn_SPC_GlobalRIC_ID_specs_1;
extern asn_TYPE_member_t asn_MBR_GlobalRIC_ID_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _GlobalRIC_ID_H_ */
#include "asn_internal.h"
