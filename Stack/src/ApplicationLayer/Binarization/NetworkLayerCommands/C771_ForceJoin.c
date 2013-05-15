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

#include "C771_ForceJoin.h"

uint8_t Compose_C771_ForceJoin_Req(C771_ForceJoin_Req* request, ComposerContext* context,
                                   BinaryStream* toStream)
{
  context->cmdId = CMDID_C771_ForceJoin;

  STREAM_WRITE_UINT8(toStream, request->m_ucJoinMode);
  STREAM_WRITE_TIME(toStream, request->m_tJoinShedTime);

  return RCS_N00_Success;
}

uint8_t Parse_C771_ForceJoin_Req(C771_ForceJoin_Req* request, ParserContext* context,
                                 BinaryStream* fromStream)
{
  STREAM_READ_UINT8(fromStream, &request->m_ucJoinMode);
  STREAM_READ_TIME(fromStream, &request->m_tJoinShedTime);

  return RCS_N00_Success;
}

uint8_t Compose_C771_ForceJoin_Resp(C771_ForceJoin_Resp* response, ComposerContext* context,
                                    BinaryStream* toStream)
{
  context->cmdId = CMDID_C771_ForceJoin;


  STREAM_WRITE_UINT8(toStream, response->m_ucJoinMode);
  STREAM_WRITE_TIME(toStream, response->m_tJoinShedTime);

  return RCS_N00_Success;
}

uint8_t Parse_C771_ForceJoin_Resp(C771_ForceJoin_Resp* response, ParserContext* context,
                                  BinaryStream* fromStream)
{
  STREAM_READ_UINT8(fromStream, &response->m_ucJoinMode);
  STREAM_READ_TIME(fromStream, &response->m_tJoinShedTime);

  return RCS_N00_Success;
}
