/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     src/proto/grpc/gcp/altscontext.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include "upb/def.h"
#include "src/proto/grpc/gcp/altscontext.upbdefs.h"
#include "src/proto/grpc/gcp/altscontext.upb.h"

extern upb_def_init src_proto_grpc_gcp_transport_security_common_proto_upbdefinit;
static const char descriptor[718] = {'\n', '$', 's', 'r', 'c', '/', 'p', 'r', 'o', 't', 'o', '/', 'g', 'r', 'p', 'c', '/', 'g', 'c', 'p', '/', 'a', 'l', 't', 's', 
'c', 'o', 'n', 't', 'e', 'x', 't', '.', 'p', 'r', 'o', 't', 'o', '\022', '\010', 'g', 'r', 'p', 'c', '.', 'g', 'c', 'p', '\032', '2', 
's', 'r', 'c', '/', 'p', 'r', 'o', 't', 'o', '/', 'g', 'r', 'p', 'c', '/', 'g', 'c', 'p', '/', 't', 'r', 'a', 'n', 's', 'p', 
'o', 'r', 't', '_', 's', 'e', 'c', 'u', 'r', 'i', 't', 'y', '_', 'c', 'o', 'm', 'm', 'o', 'n', '.', 'p', 'r', 'o', 't', 'o', 
'\"', '\361', '\003', '\n', '\013', 'A', 'l', 't', 's', 'C', 'o', 'n', 't', 'e', 'x', 't', '\022', '1', '\n', '\024', 'a', 'p', 'p', 'l', 'i', 
'c', 'a', 't', 'i', 'o', 'n', '_', 'p', 'r', 'o', 't', 'o', 'c', 'o', 'l', '\030', '\001', ' ', '\001', '(', '\t', 'R', '\023', 'a', 'p', 
'p', 'l', 'i', 'c', 'a', 't', 'i', 'o', 'n', 'P', 'r', 'o', 't', 'o', 'c', 'o', 'l', '\022', '\'', '\n', '\017', 'r', 'e', 'c', 'o', 
'r', 'd', '_', 'p', 'r', 'o', 't', 'o', 'c', 'o', 'l', '\030', '\002', ' ', '\001', '(', '\t', 'R', '\016', 'r', 'e', 'c', 'o', 'r', 'd', 
'P', 'r', 'o', 't', 'o', 'c', 'o', 'l', '\022', '>', '\n', '\016', 's', 'e', 'c', 'u', 'r', 'i', 't', 'y', '_', 'l', 'e', 'v', 'e', 
'l', '\030', '\003', ' ', '\001', '(', '\016', '2', '\027', '.', 'g', 'r', 'p', 'c', '.', 'g', 'c', 'p', '.', 'S', 'e', 'c', 'u', 'r', 'i', 
't', 'y', 'L', 'e', 'v', 'e', 'l', 'R', '\r', 's', 'e', 'c', 'u', 'r', 'i', 't', 'y', 'L', 'e', 'v', 'e', 'l', '\022', '0', '\n', 
'\024', 'p', 'e', 'e', 'r', '_', 's', 'e', 'r', 'v', 'i', 'c', 'e', '_', 'a', 'c', 'c', 'o', 'u', 'n', 't', '\030', '\004', ' ', '\001', 
'(', '\t', 'R', '\022', 'p', 'e', 'e', 'r', 'S', 'e', 'r', 'v', 'i', 'c', 'e', 'A', 'c', 'c', 'o', 'u', 'n', 't', '\022', '2', '\n', 
'\025', 'l', 'o', 'c', 'a', 'l', '_', 's', 'e', 'r', 'v', 'i', 'c', 'e', '_', 'a', 'c', 'c', 'o', 'u', 'n', 't', '\030', '\005', ' ', 
'\001', '(', '\t', 'R', '\023', 'l', 'o', 'c', 'a', 'l', 'S', 'e', 'r', 'v', 'i', 'c', 'e', 'A', 'c', 'c', 'o', 'u', 'n', 't', '\022', 
'I', '\n', '\021', 'p', 'e', 'e', 'r', '_', 'r', 'p', 'c', '_', 'v', 'e', 'r', 's', 'i', 'o', 'n', 's', '\030', '\006', ' ', '\001', '(', 
'\013', '2', '\035', '.', 'g', 'r', 'p', 'c', '.', 'g', 'c', 'p', '.', 'R', 'p', 'c', 'P', 'r', 'o', 't', 'o', 'c', 'o', 'l', 'V', 
'e', 'r', 's', 'i', 'o', 'n', 's', 'R', '\017', 'p', 'e', 'e', 'r', 'R', 'p', 'c', 'V', 'e', 'r', 's', 'i', 'o', 'n', 's', '\022', 
'R', '\n', '\017', 'p', 'e', 'e', 'r', '_', 'a', 't', 't', 'r', 'i', 'b', 'u', 't', 'e', 's', '\030', '\007', ' ', '\003', '(', '\013', '2', 
')', '.', 'g', 'r', 'p', 'c', '.', 'g', 'c', 'p', '.', 'A', 'l', 't', 's', 'C', 'o', 'n', 't', 'e', 'x', 't', '.', 'P', 'e', 
'e', 'r', 'A', 't', 't', 'r', 'i', 'b', 'u', 't', 'e', 's', 'E', 'n', 't', 'r', 'y', 'R', '\016', 'p', 'e', 'e', 'r', 'A', 't', 
't', 'r', 'i', 'b', 'u', 't', 'e', 's', '\032', 'A', '\n', '\023', 'P', 'e', 'e', 'r', 'A', 't', 't', 'r', 'i', 'b', 'u', 't', 'e', 
's', 'E', 'n', 't', 'r', 'y', '\022', '\020', '\n', '\003', 'k', 'e', 'y', '\030', '\001', ' ', '\001', '(', '\t', 'R', '\003', 'k', 'e', 'y', '\022', 
'\024', '\n', '\005', 'v', 'a', 'l', 'u', 'e', '\030', '\002', ' ', '\001', '(', '\t', 'R', '\005', 'v', 'a', 'l', 'u', 'e', ':', '\002', '8', '\001', 
'B', 'l', '\n', '\025', 'i', 'o', '.', 'g', 'r', 'p', 'c', '.', 'a', 'l', 't', 's', '.', 'i', 'n', 't', 'e', 'r', 'n', 'a', 'l', 
'B', '\020', 'A', 'l', 't', 's', 'C', 'o', 'n', 't', 'e', 'x', 't', 'P', 'r', 'o', 't', 'o', 'P', '\001', 'Z', '?', 'g', 'o', 'o', 
'g', 'l', 'e', '.', 'g', 'o', 'l', 'a', 'n', 'g', '.', 'o', 'r', 'g', '/', 'g', 'r', 'p', 'c', '/', 'c', 'r', 'e', 'd', 'e', 
'n', 't', 'i', 'a', 'l', 's', '/', 'a', 'l', 't', 's', '/', 'i', 'n', 't', 'e', 'r', 'n', 'a', 'l', '/', 'p', 'r', 'o', 't', 
'o', '/', 'g', 'r', 'p', 'c', '_', 'g', 'c', 'p', 'b', '\006', 'p', 'r', 'o', 't', 'o', '3', 
};

static upb_def_init *deps[2] = {
  &src_proto_grpc_gcp_transport_security_common_proto_upbdefinit,
  NULL
};

upb_def_init src_proto_grpc_gcp_altscontext_proto_upbdefinit = {
  deps,
  &src_proto_grpc_gcp_altscontext_proto_upb_file_layout,
  "src/proto/grpc/gcp/altscontext.proto",
  UPB_STRVIEW_INIT(descriptor, 718)
};
