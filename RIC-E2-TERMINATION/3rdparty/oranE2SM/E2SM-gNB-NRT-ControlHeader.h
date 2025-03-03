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
 * From ASN.1 module "E2SM-gNB-NRT-IEs"
 * 	found in "../asnTextFiles/e2sm-gNB-NRT-v401.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_E2SM_gNB_NRT_ControlHeader_H_
#define	_E2SM_gNB_NRT_ControlHeader_H_


#include "asn_application.h"

/* Including external dependencies */
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum E2SM_gNB_NRT_ControlHeader_PR {
	E2SM_gNB_NRT_ControlHeader_PR_NOTHING,	/* No components present */
	E2SM_gNB_NRT_ControlHeader_PR_controlHeader_Format1
	/* Extensions may appear below */
	
} E2SM_gNB_NRT_ControlHeader_PR;

/* Forward declarations */
struct E2SM_gNB_NRT_ControlHeader_Format1;

/* E2SM-gNB-NRT-ControlHeader */
typedef struct E2SM_gNB_NRT_ControlHeader {
	E2SM_gNB_NRT_ControlHeader_PR present;
	union E2SM_gNB_NRT_ControlHeader_u {
		struct E2SM_gNB_NRT_ControlHeader_Format1	*controlHeader_Format1;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2SM_gNB_NRT_ControlHeader_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E2SM_gNB_NRT_ControlHeader;

#ifdef __cplusplus
}
#endif

#endif	/* _E2SM_gNB_NRT_ControlHeader_H_ */
#include "asn_internal.h"
