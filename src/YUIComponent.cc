/****************************************************************************

Copyright (c) 2000 - 2010 Novell, Inc.
All Rights Reserved.

This program is free software; you can redistribute it and/or
modify it under the terms of version 2 of the GNU General Public License as
published by the Free Software Foundation.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.   See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, contact Novell, Inc.

To contact Novell about this file by physical or electronic mail,
you may find current contact information at www.novell.com

****************************************************************************


  File:		YUIComponent.cc

  Author:	Stefan Hundhammer <shundhammer@suse.de>

/-*/


#include <string.h>
#include <stdio.h>

#define y2log_component "ui-component"
#include <ycp/y2log.h>

#include <ycp/YCPValue.h>
#include <ycp/YCPVoid.h>

#include "YUIComponent.h"
#include "YUINamespace.h"


// Most class variables are static so they can be accessed from static methods.

YUIComponent *	YUIComponent::_uiComponent	= 0;


YUIComponent::YUIComponent( const string & name )
    : _requestedUIName( name )
    , _namespace( 0 )
{
}


YUIComponent::~YUIComponent()
{
}


void
YUIComponent::setRequestedUIName( const string & name )
{
}


YUIComponent *
YUIComponent::uiComponent()
{
    return NULL;
}


Y2Namespace *
YUIComponent::import( const char* name )
{
    y2debug ("%s trying to import %s", this->name().c_str(), name);
    
    if ( strcmp (name, "UI") == 0)
    {
        if (_namespace == NULL)
        {
            _namespace = new YUINamespace(this);
	    y2debug ("Namespace created %p", _namespace);
        }

        return _namespace;
    }

    return NULL;
}


void
YUIComponent::createUI()
{
	y2warning( "Using dummy UI, NOT creating a UI" );
	return;
}


YCPValue
YUIComponent::callBuiltin( void * function, int fn_argc, YCPValue fn_argv[] )
{
	return YCPVoid();
}


void
YUIComponent::setServerOptions( int argc, char **argv )
{
}


void
YUIComponent::result( const YCPValue & /*result*/ )
{
}

// EOF
