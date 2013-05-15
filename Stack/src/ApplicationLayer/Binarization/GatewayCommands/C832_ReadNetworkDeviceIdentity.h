/*
* Copyright (C) 2013 Nivis LLC.
* Email:   opensource@nivis.com
* Website: http://www.nivis.com
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, version 3 of the License.
* 
* Redistribution and use in source and binary forms must retain this
* copyright notice.

* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
*
*/

#ifndef C832_READNETWORKDEVICEIDENTITY_H_
#define C832_READNETWORKDEVICEIDENTITY_H_

#include "../../Model/GatewayCommands.h"
#include "../../../util/Binarization.h"

#ifdef __cplusplus
extern "C" {
#endif


	/**
	 * @Binarize all requests: CMDID + Req_Length + Req_Data
	 * @param p_pReq
	 * @param p_pBuffer
	 */
	uint8_t Compose_C832_ReadNetworkDeviceIdentity_Req(C832_ReadNetworkDeviceIdentity_Req* request, ComposerContext* context,
			BinaryStream* toStream);

	/**
	 * @Debinarize
	 */
	uint8_t Parse_C832_ReadNetworkDeviceIdentity_Req(C832_ReadNetworkDeviceIdentity_Req* request, ParserContext* context,
			BinaryStream* fromStream);

	/**
	 *
	 */
	uint8_t Compose_C832_ReadNetworkDeviceIdentity_Resp(C832_ReadNetworkDeviceIdentity_Resp* response, ComposerContext* context,
			BinaryStream* toStream);

	/**
	 *
	 */
	uint8_t Parse_C832_ReadNetworkDeviceIdentity_Resp(C832_ReadNetworkDeviceIdentity_Resp* response, ParserContext* context,
			BinaryStream* fromStream);

	
	
#ifdef __cplusplus
}
#endif


#endif /*C832_READNETWORKDEVICEIDENTITY_H_*/
