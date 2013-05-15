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

#include "C103_WriteBurstPeriod.h"

uint8_t Compose_C103_WriteBurstPeriod_Req(C103_WriteBurstPeriod_Req* request, ComposerContext* context,
		BinaryStream* toStream)
{
	context->cmdId = CMDID_C103_WriteBurstPeriod;
	STREAM_WRITE_UINT8(toStream, request->burstMessage);
	STREAM_WRITE_TIME(toStream, request->updatePeriod);
	STREAM_WRITE_TIME(toStream, request->maxUpdatePeriod);
	return RCS_N00_Success;
}

uint8_t Parse_C103_WriteBurstPeriod_Req(C103_WriteBurstPeriod_Req* request, ParserContext* context,
		BinaryStream* fromStream)
{
	STREAM_READ_UINT8(fromStream, &request->burstMessage);
	STREAM_READ_TIME(fromStream, &request->updatePeriod);
	STREAM_READ_TIME(fromStream, &request->maxUpdatePeriod);

	return RCS_N00_Success;
}

uint8_t Compose_C103_WriteBurstPeriod_Resp(C103_WriteBurstPeriod_Resp* response, ComposerContext* context,
		BinaryStream* toStream)
{
	context->cmdId = CMDID_C103_WriteBurstPeriod;
	STREAM_WRITE_UINT8(toStream, response->burstMessage);
	STREAM_WRITE_TIME(toStream, response->updatePeriod);
	STREAM_WRITE_TIME(toStream, response->maxUpdatePeriod);
	return RCS_N00_Success;
}

uint8_t Parse_C103_WriteBurstPeriod_Resp(C103_WriteBurstPeriod_Resp* response, ParserContext* context,
		BinaryStream* fromStream)
{
	STREAM_READ_UINT8(fromStream, &response->burstMessage);
	STREAM_READ_TIME(fromStream, &response->updatePeriod);
	STREAM_READ_TIME(fromStream, &response->maxUpdatePeriod);

	return RCS_N00_Success;
}
