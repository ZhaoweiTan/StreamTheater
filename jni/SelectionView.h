/************************************************************************************

Filename    :   SelectionView.h
Content     :
Created     :	4/15/2015
Authors     :   Michael Grosse Huelsewiesche

Copyright   :   Copyright 2014 Oculus VR, LLC. All Rights reserved.

This source code is licensed under the BSD-style license found in the
LICENSE file in the Cinema/ directory. An additional grant 
of patent rights can be found in the PATENTS file in the same directory.

*************************************************************************************/

#if !defined( SelectionView_h )
#define SelectionView_h

#include "View.h"
#include "PcManager.h"

using namespace OVR;

namespace VRMatterStreamTheater {

class SelectionView : public View
{
public:
	SelectionView( const char * name );
	virtual 									~SelectionView();

	virtual void 								Select( void ) = 0;
	virtual void 								SelectionHighlighted( bool isHighlighted ) = 0;
    virtual void 								SetCategory( const PcCategory category ) = 0;
};

} // namespace VRMatterStreamTheater

#endif // SelectionView_h
