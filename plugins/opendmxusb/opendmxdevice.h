/*
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Library General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 *
 *
 * artnetdevice.h
 * Interface for the artnet device
 * Copyright (C) 2005  Simon Newton
 */

#ifndef OPENDMXDEVICE_H
#define OPENDMXDEVICE_H

#include <lla/device.h>

class OpenDmxDevice : public Device {

	public:
		OpenDmxDevice(Plugin *owner, const char *name) ;
		~OpenDmxDevice() ;

		int start() ;
		int stop() ;
		int save_config() ;
		int configure(void *req, int len) ;

	private:
		bool m_enabled ;
};

#endif
