
//=============================================================================
/**
 *  @file    component_ci.cpp
 *
 *  $Id$
 *
 *  Visitor generating code for Components in the client inline.
 *
 *
 *  @author Jeff Parsons
 */
//=============================================================================

// ******************************************************
// Component visitor for client inline
// ******************************************************

be_visitor_component_ci::be_visitor_component_ci (be_visitor_context *ctx)
  : be_visitor_component (ctx)
{
}

be_visitor_component_ci::~be_visitor_component_ci (void)
{
}

int
be_visitor_component_ci::visit_component (be_component *node)
{
  if (node->imported () || node->cli_inline_gen ())
    {
      return 0;
    }

  TAO_OutStream *os = this->ctx_->stream ();

  *os << "// TAO_IDL - Generated from" << be_nl
      << "// " << __FILE__ << ":" << __LINE__ << be_nl;

  // Generate the constructor from stub and servant.
  node->gen_stub_ctor (os);

  *os << be_nl << be_nl
      << "ACE_INLINE" << be_nl;
  *os << node->name () << "::"
      << node->local_name () << " ("
      << be_idt << be_idt_nl
      << "::IOP::IOR *ior," << be_nl
      << "TAO_ORB_Core *oc" << be_uidt_nl
      << ")" << be_uidt_nl
      << ": ::CORBA::Object (ior, oc)" << be_uidt_nl
      << "{" << be_nl
      << "}" ;

  node->cli_inline_gen (true);
  return 0;
}

int
be_visitor_component_ci::visit_connector (be_connector *node)
{
  return this->visit_component (node);
}

