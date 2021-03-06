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

#include "C786_ReadNeighborPropertyFlag.h"

uint8_t Compose_C786_ReadNeighborPropertyFlag_Req ( C786_ReadNeighborPropertyFlag_Req* request,
                                    ComposerContext* context,
                                    BinaryStream* toStream)
{
  context->cmdId = CMDID_C786_ReadNeighborPropertyFlag;
  STREAM_WRITE_UINT16(toStream, request->Nickname);

  return RCS_N00_Success; // success
}

uint8_t Parse_C786_ReadNeighborPropertyFlag_Req ( C786_ReadNeighborPropertyFlag_Req* request,
                                    ParserContext* context,
		                    BinaryStream* fromStream)
{
#if defined(_DEBUG)
//   if (fromStream->remainingBytes > C786_ReqSize)
//     return RCS_E01_Undefined1; // too many bytes
#endif

  STREAM_READ_UINT16(fromStream, &request->Nickname);

  return RCS_N00_Success; // success
}

uint8_t Compose_C786_ReadNeighborPropertyFlag_Resp ( C786_ReadNeighborPropertyFlag_Resp* response,
                                    ComposerContext* context,
                                    BinaryStream* toStream)
{
  context->cmdId = CMDID_C786_ReadNeighborPropertyFlag;
  STREAM_WRITE_UINT16(toStream, response->Nickname);
  STREAM_WRITE_UINT8(toStream, response->NeighbourFlag);    // bit0

  return RCS_N00_Success; // success
}

uint8_t Parse_C786_ReadNeighborPropertyFlag_Resp ( C786_ReadNeighborPropertyFlag_Resp* response,
                                    ParserContext* context,
		                    BinaryStream* fromStream)
{
#if defined(_DEBUG)
//   if (fromStream->remainingBytes > C786_RespSize)
//     return RCS_E01_Undefined1; // too many bytes
#endif

  STREAM_READ_UINT16(fromStream, &response->Nickname);
  STREAM_READ_UINT8(fromStream, &response->NeighbourFlag);    // bit0

  return RCS_N00_Success; // success
}
