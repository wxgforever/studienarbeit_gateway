file(REMOVE_RECURSE
  "CMakeFiles/cpplint"
  "src_generated/ua_types_generated.c"
  "src_generated/ua_types_generated.h"
  "src_generated/ua_types_generated_handling.h"
  "src_generated/ua_types_generated_encoding_binary.h"
  "src_generated/ua_transport_generated.c"
  "src_generated/ua_transport_generated.h"
  "src_generated/ua_transport_generated_handling.h"
  "src_generated/ua_transport_generated_encoding_binary.h"
  "src_generated/ua_statuscode_descriptions.c"
  "src_generated/ua_namespace0.c"
  "src_generated/ua_namespace0.h"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/cpplint.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
