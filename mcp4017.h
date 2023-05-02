// @File		MCP4017.H		 		
// @Author		JOSIMAR PEREIRA LEITE
// @country		BRAZIL
// @Date		02/05/23
//
//
// Copyright (C) 2023 JOSIMAR PEREIRA LEITE
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
#ifndef MCP4017_H
#define MCP4017_H

#define MCP4017_SLA_W 0x5E
#define MCP4017_SLA_R 0x5F

void MCP4017_Write(unsigned char byte)
{
    Wire_Start();
    Wire_Write(MCP4017_SLA_W);
    Wire_Write( byte );
    Wire_Stop();
}

#endif
