/**
 * MltFactory.cpp - MLT Wrapper
 * Copyright (C) 2004-2005 Charles Yates
 * Author: Charles Yates <charles.yates@pandora.be>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#include "MltFactory.h"
#include "MltProducer.h"
#include "MltFilter.h"
#include "MltTransition.h"
#include "MltConsumer.h"
using namespace Mlt;

int Factory::init( char *arg )
{
	return mlt_factory_init( arg );
}

Producer *Factory::producer( char *id, char *arg )
{
	return new Producer( id, arg );
}

Filter *Factory::filter( char *id, char *arg )
{
	return new Filter( id, arg );
}

Transition *Factory::transition( char *id, char *arg )
{
	return new Transition( id, arg );
}

Consumer *Factory::consumer( char *id, char *arg )
{
	return new Consumer( id, arg );
}

void Factory::close( )
{
	mlt_factory_close( );
}


