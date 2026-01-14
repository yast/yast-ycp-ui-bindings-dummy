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


   File:	YUINamespace.cc

   Authors:	Klaus Kaempf <kkaempf@suse.de>
		Stanislav Visnovsky <visnov@suse.cz>

   Maintainer:	Stefan Hundhammer <shundhammer@suse.de>

/-*/


#include <ycp/YCPBoolean.h>
#include <ycp/YCPInteger.h>
#include <ycp/YCPMap.h>
#include <ycp/YCPVoid.h>
#include <ycp/YCPString.h>
#include <ycp/YCPSymbol.h>
#include <ycp/YCPTerm.h>
#include <y2/Y2Function.h>

#define y2log_component "ui"
#include <ycp/y2log.h>

#include "YUIComponent.h"
#include "YUINamespace.h"

#define VERBOSE_UI_CALLS	0


YCPValue
YUINamespace::SetLanguage( const YCPString & language )
{
    return YCPVoid();
}


YCPValue
YUINamespace::SetLanguage( const YCPString & language, const YCPString & encoding )
{
    return YCPVoid();
}


YCPValue
YUINamespace::GetProductName()
{
	return YCPVoid();
}


YCPValue
YUINamespace::SetProductName( const YCPString & name )
{
    return YCPVoid();
}


YCPValue
YUINamespace::SetConsoleFont( const YCPString & console_magic,
                              const YCPString & font,
                              const YCPString & screen_map,
                              const YCPString & unicode_map,
                              const YCPString & encoding )
{
    return YCPVoid();
}


YCPValue
YUINamespace::SetKeyboard()
{
    return YCPVoid();
}


YCPValue
YUINamespace::GetLanguage( const YCPBoolean & strip )
{
	return YCPVoid();
}


YCPValue
YUINamespace::RunInTerminal( const YCPString &module )
{
    return YCPVoid();
}

YCPValue
YUINamespace::UserInput()
{
    return YCPVoid();
}


YCPValue
YUINamespace::PollInput()
{
	return YCPVoid();
}


YCPValue
YUINamespace::TimeoutUserInput( const YCPInteger& timeout )
{
	return YCPVoid();
}


YCPValue
YUINamespace::WaitForEvent()
{
	return YCPVoid();
}


YCPValue
YUINamespace::WaitForEvent( const YCPInteger & timeout )
{
	return YCPVoid();
}


YCPValue
YUINamespace::OpenDialog( const YCPTerm & opts, const YCPTerm & dialog_term )
{
	return YCPVoid();
}


YCPValue
YUINamespace::OpenDialog( const YCPTerm & dialog_term )
{
	return YCPVoid();
}


YCPValue
YUINamespace::CloseDialog()
{
	return YCPVoid();
}


YCPValue
YUINamespace::OpenUI()
{
    return YCPVoid();
}

YCPValue
YUINamespace::CloseUI()
{
    return YCPVoid();
}


YCPValue
YUINamespace::ChangeWidget( const YCPSymbol & widget_id, const YCPSymbol & property, const YCPValue & new_value )
{
	return YCPVoid();
}

YCPBoolean
YUINamespace::OpenContextMenu( const YCPTerm & term )
{
	return YCPBoolean( false );
}


YCPValue
YUINamespace::SetReleaseNotes( const YCPMap & relnotes )
{
	return YCPVoid();
}


YCPValue
YUINamespace::SetProductLogo( const YCPBoolean & show_logo)
{
	return YCPVoid();
}


YCPValue
YUINamespace::SetApplicationIcon( const YCPString & icon)
{
	return YCPVoid();
}

YCPValue
YUINamespace::SetApplicationTitle( const YCPString & text)
{
    return YCPVoid();
}


YCPValue
YUINamespace::ChangeWidget( const YCPTerm & widget_id, const YCPSymbol & property, const YCPValue & new_value )
{
	return YCPVoid();
}


YCPValue
YUINamespace::ChangeWidget( const YCPTerm & widget_id, const YCPTerm & property, const YCPValue & new_value )
{
	return YCPVoid();
}


YCPValue
YUINamespace::QueryWidget( const YCPSymbol & widget_id, const YCPSymbol & property )
{
	return YCPVoid();
}


YCPValue
YUINamespace::QueryWidget( const YCPSymbol & widget_id, const YCPTerm & property )
{
	return YCPVoid();
}


YCPValue
YUINamespace::QueryWidget( const YCPTerm & widget_id, const YCPSymbol & property )
{
	return YCPVoid();
}


YCPValue
YUINamespace::QueryWidget( const YCPTerm & widget_id, const YCPTerm & property )
{
	return YCPVoid();
}


YCPValue
YUINamespace::ReplaceWidget( const YCPSymbol & widget_id, const YCPTerm & new_widget )
{
	return YCPVoid();
}


YCPValue
YUINamespace::ReplaceWidget( const YCPTerm & widget_id, const YCPTerm & new_widget )
{
	return YCPVoid();
}


YCPValue
YUINamespace::SetFocus( const YCPSymbol & widget_id )
{
	return YCPVoid();
}


YCPValue
YUINamespace::SetFocus( const YCPTerm & widget_id )
{
	return YCPVoid();
}


YCPValue
YUINamespace::BusyCursor()
{
    return YCPVoid();
}


YCPValue
YUINamespace::RedrawScreen()
{
    return YCPVoid();
}


YCPValue
YUINamespace::NormalCursor()
{
    return YCPVoid();
}


YCPValue
YUINamespace::MakeScreenShot( const YCPString & filename )
{
    return YCPVoid();
}


YCPValue
YUINamespace::MakeScreenShot()
{
	return YCPVoid();
}


YCPValue
YUINamespace::DumpWidgetTree()
{
    return YCPVoid();
}


YCPValue
YUINamespace::Beep()
{
    return YCPVoid();
}

YCPValue
YUINamespace::RecordMacro( const YCPString & filename )
{
    return YCPVoid();
}


YCPValue
YUINamespace::StopRecordMacro()
{
    return YCPVoid();
}


YCPValue
YUINamespace::PlayMacro( const YCPString & filename )
{
    return YCPVoid();
}

YCPValue
YUINamespace::FakeUserInput()
{
    return YCPVoid();
}


YCPValue
YUINamespace::FakeUserInput( const YCPValue & next_input )
{
    return YCPVoid();
}



YCPValue
YUINamespace::Glyph( const YCPSymbol & glyphSym  )
{
	return YCPString( "*" );
}


YCPValue
YUINamespace::GetDisplayInfo()
{
	return YCPVoid();
}


YCPValue
YUINamespace::RecalcLayout()
{
    return YCPVoid();
}


YCPValue
YUINamespace::PostponeShortcutCheck()
{
    return YCPVoid();
}

YCPValue
YUINamespace::CheckShortcuts()
{
    return YCPVoid();
}


YCPValue
YUINamespace::WidgetExists( const YCPSymbol & widget_id )
{
	return YCPVoid();
}


YCPValue
YUINamespace::WidgetExists( const YCPTerm & widget_id )
{
	return YCPVoid();
}


YCPValue
YUINamespace::RunPkgSelection( const YCPValue & widget_id )
{
	return YCPVoid();
}


YCPValue
YUINamespace::AskForExistingDirectory( const YCPString & startDir, const YCPString & headline )
{
	return YCPVoid();
}


YCPValue
YUINamespace::AskForExistingFile( const YCPString & startWith, const YCPString & filter, const YCPString & headline  )
{
	return YCPVoid();
}


YCPValue
YUINamespace::AskForSaveFileName( const YCPString & startWith, const YCPString & filter, const YCPString & headline )
{
	return YCPVoid();
}


YCPValue
YUINamespace::AskForWidgetStyle()
{
    return YCPVoid();
}


YCPValue
YUINamespace::SetFunctionKeys( const YCPMap & new_fkeys )
{
    return YCPVoid();
}


YCPValue
YUINamespace::Recode( const YCPString & from, const YCPString & to, const YCPString & text )
{
	return YCPVoid();
}


YCPValue
YUINamespace::HasSpecialWidget( const YCPSymbol & widget )
{
	return YCPBoolean( false );
}


YCPValue
YUINamespace::WizardCommand( const YCPTerm & command )
{
	return YCPBoolean( false );
}


YCPBoolean
YUINamespace::TextMode()
{
	return YCPBoolean( false );
}


YCPValue
YUINamespace::CallHandler( void * ptr, int argc, YCPValue argv[] )
{
	return YCPVoid();
}


//
// --------------------------------------------------------------------
//


YUIFunction::YUIFunction (YUINamespace *	instance,
			    YUIComponent * 	comp,
			    unsigned 		pos,
			    bool		play_macro_blocks) :
m_position (pos)
, m_instance (instance)
, m_comp (comp)
, m_play_macro_blocks (play_macro_blocks)
, m_param1 ( YCPNull() )
, m_param2 ( YCPNull() )
, m_param3 ( YCPNull() )
, m_param4 ( YCPNull() )
, m_param5 ( YCPNull() )
{

};


bool YUIFunction::attachParameter (const YCPValue& arg, const int position)
{
    switch (position)
    {
	case 0: m_param1 = arg; break;
	case 1: m_param2 = arg; break;
	case 2: m_param3 = arg; break;
	case 3: m_param4 = arg; break;
	case 4: m_param5 = arg; break;
	default: return false;
    }

    return true;
}


constTypePtr YUIFunction::wantedParameterType() const
{
    // we do not help them with type conversion
    // hey but we could, at least for non-overloaded functions
    return Type::Any; // FIXME make this the default behavior in parent class
}


bool YUIFunction::appendParameter (const YCPValue& arg)
{
    if (m_param1.isNull())
    {
        m_param1 = arg;
        return true;
    } else if (m_param2.isNull())
    {
        m_param2 = arg;
        return true;
    } else if (m_param3.isNull())
    {
        m_param3 = arg;
        return true;
    } else if (m_param4.isNull())
    {
        m_param4 = arg;
        return true;
    } else if (m_param5.isNull())
    {
        m_param5 = arg;
        return true;
    }
    y2internal ("appendParameter > 5 not implemented");
    return false;
}


bool YUIFunction::finishParameters()
{
    // Aha, perl could give us any garbage.
    // Hmm, how do we cope with giving garbage to ycp modules?
    // - it heeds wantedParameterType
    // Funny, why is this function not called?

    y2internal ("FIXME finishParameters not implemented");
    return true;
}


YCPValue YUIFunction::evaluateCall()
{
	return YCPVoid();	// dummy UI component
}


YCPValue YUIFunction::evaluateCall_int()
{
    switch (m_position)
    {
#include "UIBuiltinCalls.h"
    }

    return YCPNull();
}


bool YUIFunction::reset()
{
    m_param1 = YCPNull();
    m_param2 = YCPNull();
    m_param3 = YCPNull();
    m_param4 = YCPNull();
    m_param5 = YCPNull();

    return true;
}


string YUIFunction::name() const
{
    // FIXME. when is this called at all?
    return("Y2UI");
}


// error reporting helper
static
void no_match (const char * name, constTypePtr type,
	       vector<SymbolEntryPtr>::iterator	b,
	       vector<SymbolEntryPtr>::iterator e)
{
    y2error ("Function %s called with wrong type %s",
	     name, type->toString().c_str());
    y2error ("TODO: display the candidates"); // use b and e
}




YUIOverloadedFunction::YUIOverloadedFunction ( YUINamespace * instance,
						 YUIComponent * comp,
						 unsigned pos_offset,
						 vector<SymbolEntryPtr>::iterator candidates_b,
						 vector<SymbolEntryPtr>::iterator candidates_e,
						 bool play_macro_blocks )
    : YUIFunction (instance, comp, pos_offset, play_macro_blocks)
    , m_candidates_b (candidates_b)
    , m_candidates_e (candidates_e)
{
    // still to do: m_position is just the first candidate
}


bool
YUIOverloadedFunction::finishParameters()
{
    FunctionTypePtr real_tp = new FunctionType (Type::Unspec); //return type
    if (!m_param1.isNull())
    {
	real_tp->concat (Type::vt2type (m_param1->valuetype()));
	if (!m_param2.isNull())
	{
	    real_tp->concat (Type::vt2type (m_param2->valuetype()));
	    if (!m_param3.isNull())
	    {
		real_tp->concat (Type::vt2type (m_param3->valuetype()));
		if (!m_param4.isNull())
		{
		    real_tp->concat (Type::vt2type (m_param4->valuetype()));

		    if (!m_param5.isNull())
		    {
			real_tp->concat (Type::vt2type (m_param5->valuetype()));
		    }
		}
	    }
	}
    }
    y2debug ("Actual type: %s", real_tp->toString().c_str());

    vector<SymbolEntryPtr>::iterator
	b = m_candidates_b,
	e = m_candidates_e,
	it;

    for (it = b; it != e; ++it)
    {
	SymbolEntryPtr se_p = *it;
	constFunctionTypePtr cand_type = se_p->type();
        // match direction is slightly confusing here as real_tp can be e.g. any(integer)
        // that means I want function that accepts integer and return anything
        // and if there is function that returns integer and accept anything I want it
        // So I actually want to know if there is candidate that match against proposed type
        // see FunctionType#match implementation or Type#match documentation
	int m = cand_type->match (real_tp);
	y2debug ("Candidate: %s MATCH: %d", se_p->toString().c_str(), m);

	if (m == 0)
	    break;
    }

    if (it == e)
    {
	// any candidate has a good name. report actual used signature.
	no_match ((*b)->name(), real_tp, b, e);
	return false;
    }

    // found
    m_position += (it - b);
    return true;
}


YUINamespace::YUINamespace (YUIComponent* comp)
{
    m_comp = comp;
    registerFunctions();
}


YUINamespace::~YUINamespace()
{
    // NOP
}


Y2Function* YUINamespace::createFunctionCall( const string name, constFunctionTypePtr type )
{
#if VERBOSE_UI_CALLS
    y2debug ("Creating function call for %s", name.c_str());
    y2debug ("whose type is %s", type? type->toString().c_str() : "unknown");
#endif

    // overloading: functions with same name must be adjacent in m_symbols

    symbols_t::iterator
	b = m_symbols.begin(),
	e  = m_symbols.end(),
	it = b;
    SymbolEntryPtr p;

    //
    // 1: Find start of range of overloaded functions
    //

    for ( ; it != e; it++ )
    {
	p = (*it);
	if ( p->name() == name )
	    break;
    }

    if ( it == e )
    {
        y2error ("No such function %s", name.c_str());
        return NULL;
    }

    bool play_macro_blocks = false;

    symbols_t::iterator rb = it;
    // 2: find end of range of overloaded functions or the exact match

    for ( ; it != e; it++ )
    {
	p = (*it);
	if ( p->name() != name )
	    break;

	// type comparison, ugh, use match

	if ( type && p->type() == type )
	{
	    // found exact match
	    // BTW, p->position() may change as we go, don't get confused.
	    // What matters is our own counting.
#if VERBOSE_UI_CALLS
	    y2debug ("Found symbol '%s' @%d", p->toString().c_str(), p->position());
#endif
	    return new YUIFunction (this, m_comp, it - b, play_macro_blocks);
	}
    }

    symbols_t::iterator re = it;
    // [rb, re) have matching name

    if ( type )
    {
	// we have exhausted the candidates without finding a match
	y2error ("Incompatible yast2-core?");
	no_match (name.c_str(), type, rb, re);
	return NULL;
    }

    y2debug ("overloaded %s, %td@%td", name.c_str(), re - rb, rb - b);
    return new YUIOverloadedFunction (this, m_comp, rb - b, rb, re, play_macro_blocks);
}


void YUINamespace::registerFunctions()
{
#include "UIBuiltinTable.h"
}

