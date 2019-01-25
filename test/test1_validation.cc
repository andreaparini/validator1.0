// See README.txt for information and build instructions.

#include <fstream>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/message.h>
#include <iostream>
#include <utility>
#include <vector>
#include <string>

#include "../proto/test1.pb.h"
#include "google/protobuf/wrappers.pb.h"
#include "../src/validator.h"

using namespace std;

using google::protobuf::Descriptor;
using google::protobuf::FieldDescriptor;
using google::protobuf::Reflection;
using google::protobuf::Message;

using google::protobuf::DoubleValue;
using google::protobuf::Int32Value;
using google::protobuf::Int64Value;
using google::protobuf::UInt32Value;
using google::protobuf::UInt64Value;


vector<Validator::ValidationOutput> test1_validation () {
    // Verify that the version of the library that we linked against is
    // compatible with the version of the headers we compiled against.
    GOOGLE_PROTOBUF_VERIFY_VERSION;

    tutorial::Person person;
    
    vector<Validator::ValidationOutput> messageStatus;
    
  
    
    
    //defining test values
    
    double doubletrue_equal    = 5.;
    double doubletrue_lt       = 5. - 1 ;
    double doubletrue_lte      = 5.  ;
    double doubletrue_lte2     = 5. - 1;
    double doubletrue_gt       = 5. + 1;
    double doubletrue_gte      = 5.;
    double doubletrue_gte2     = 5. + 1;    
    
    double doublefalse_equal     = 5. - 1.;
    double doublefalse_lt        = 5. + 1.;
    double doublefalse_lte       = 5. + 1.;
    double doublefalse_lte2      = 5. + 1.;
    double doublefalse_gt        = 5. - 1.;
    double doublefalse_gte       = 5. - 1.;
    double doublefalse_gte2      = 5. - 1.;
    
    
    int32_t int32true_equal    = 5;
    int32_t int32true_lt       = 5 - 1 ;
    int32_t int32true_lte      = 5  ;
    int32_t int32true_lte2     = 5 - 1;
    int32_t int32true_gt       = 5 + 1;
    int32_t int32true_gte      = 5;
    int32_t int32true_gte2     = 5 + 1;
    
    int32_t int32false_equal     = 5 - 1;
    int32_t int32false_lt        = 5 + 1;
    int32_t int32false_lte       = 5 + 1;
    int32_t int32false_lte2      = 5 + 1;
    int32_t int32false_gt        = 5 - 1;
    int32_t int32false_gte       = 5 - 1;
    int32_t int32false_gte2      = 5 - 1;
   
    
    int64_t int64true_equal    = 5;
    int64_t int64true_lt       = 5 - 1 ;
    int64_t int64true_lte      = 5  ;
    int64_t int64true_lte2     = 5 - 1;
    int64_t int64true_gt       = 5 + 1;
    int64_t int64true_gte      = 5;
    int64_t int64true_gte2     = 5 + 1;
    
    int64_t int64false_equal     = 5 - 1;
    int64_t int64false_lt        = 5 + 1;
    int64_t int64false_lte       = 5 + 1;
    int64_t int64false_lte2      = 5 + 1;
    int64_t int64false_gt        = 5 - 1;
    int64_t int64false_gte       = 5 - 1;
    int64_t int64false_gte2      = 5 - 1;
    
    
    uint32_t uint32true_equal    = 5;
    uint32_t uint32true_lt       = 5 - 1 ;
    uint32_t uint32true_lte      = 5  ;
    uint32_t uint32true_lte2     = 5 - 1;
    uint32_t uint32true_gt       = 5 + 1;
    uint32_t uint32true_gte      = 5;
    uint32_t uint32true_gte2     = 5 + 1;
    
    uint32_t uint32false_equal     = 5 - 1;
    uint32_t uint32false_lt        = 5 + 1;
    uint32_t uint32false_lte       = 5 + 1;
    uint32_t uint32false_lte2      = 5 + 1;
    uint32_t uint32false_gt        = 5 - 1;
    uint32_t uint32false_gte       = 5 - 1;
    uint32_t uint32false_gte2      = 5 - 1;
    
    
    uint64_t uint64true_equal    = 5;
    uint64_t uint64true_lt       = 5 - 1 ;
    uint64_t uint64true_lte      = 5  ;
    uint64_t uint64true_lte2     = 5 - 1;
    uint64_t uint64true_gt       = 5 + 1;
    uint64_t uint64true_gte      = 5;
    uint64_t uint64true_gte2     = 5 + 1;
    
    uint64_t uint64false_equal     = 5 - 1;
    uint64_t uint64false_lt        = 5 + 1;
    uint64_t uint64false_lte       = 5 + 1;
    uint64_t uint64false_lte2      = 5 + 1;
    uint64_t uint64false_gt        = 5 - 1;
    uint64_t uint64false_gte       = 5 - 1;
    uint64_t uint64false_gte2      = 5 - 1;
    
    
    // double
    DoubleValue* doublewrap_true_equal = person.mutable_doubletrue_equal();
    doublewrap_true_equal->set_value(doubletrue_equal);  
    DoubleValue* doublewrap_true_lt = person.mutable_doubletrue_lt();
    doublewrap_true_lt->set_value(doubletrue_lt);
    DoubleValue* doublewrap_true_lte = person.mutable_doubletrue_lte();
    doublewrap_true_lte->set_value(doubletrue_lte);
    DoubleValue* doublewrap_true_lte2 = person.mutable_doubletrue_lte2();
    doublewrap_true_lte2->set_value(doubletrue_lte2);
    DoubleValue* doublewrap_true_gt = person.mutable_doubletrue_gt();
    doublewrap_true_gt->set_value(doubletrue_gt);
    DoubleValue* doublewrap_true_gte = person.mutable_doubletrue_gte();
    doublewrap_true_gte->set_value(doubletrue_gte);
    DoubleValue* doublewrap_true_gte2 = person.mutable_doubletrue_gte2();
    doublewrap_true_gte2->set_value(doubletrue_gte2);
    DoubleValue* doublewrap_false_equal = person.mutable_doublefalse_equal();
    doublewrap_false_equal->set_value(doublefalse_equal);
    DoubleValue* doublewrap_false_lt = person.mutable_doublefalse_lt();
    doublewrap_false_lt->set_value(doublefalse_lt);
    DoubleValue* doublewrap_false_lte = person.mutable_doublefalse_lte();
    doublewrap_false_lte->set_value(doublefalse_lte);
    DoubleValue* doublewrap_false_lte2 = person.mutable_doublefalse_lte2();
    doublewrap_false_lte2->set_value(doublefalse_lte2);
    DoubleValue* doublewrap_false_gt = person.mutable_doublefalse_gt();
    doublewrap_false_gt->set_value(doublefalse_gt);
    DoubleValue* doublewrap_false_gte = person.mutable_doublefalse_gte();
    doublewrap_false_gte->set_value(doublefalse_gte);
    DoubleValue* doublewrap_false_gte2 = person.mutable_doublefalse_gte2();
    doublewrap_false_gte2->set_value(doublefalse_gte2);

    
    // int32
    Int32Value* int32wrap_true_equal = person.mutable_int32true_equal();
    int32wrap_true_equal->set_value(int32true_equal);  
    Int32Value* int32wrap_true_lt = person.mutable_int32true_lt();
    int32wrap_true_lt->set_value(int32true_lt);
    Int32Value* int32wrap_true_lte = person.mutable_int32true_lte();
    int32wrap_true_lte->set_value(int32true_lte);
    Int32Value* int32wrap_true_lte2 = person.mutable_int32true_lte2();
    int32wrap_true_lte2->set_value(int32true_lte2);
    Int32Value* int32wrap_true_gt = person.mutable_int32true_gt();
    int32wrap_true_gt->set_value(int32true_gt);
    Int32Value* int32wrap_true_gte = person.mutable_int32true_gte();
    int32wrap_true_gte->set_value(int32true_gte);
    Int32Value* int32wrap_true_gte2 = person.mutable_int32true_gte2();
    int32wrap_true_gte2->set_value(int32true_gte2);
    Int32Value* int32wrap_false_equal = person.mutable_int32false_equal();
    int32wrap_false_equal->set_value(int32false_equal);
    Int32Value* int32wrap_false_lt = person.mutable_int32false_lt();
    int32wrap_false_lt->set_value(int32false_lt);
    Int32Value* int32wrap_false_lte = person.mutable_int32false_lte();
    int32wrap_false_lte->set_value(int32false_lte);
    Int32Value* int32wrap_false_lte2 = person.mutable_int32false_lte2();
    int32wrap_false_lte2->set_value(int32false_lte2);
    Int32Value* int32wrap_false_gt = person.mutable_int32false_gt();
    int32wrap_false_gt->set_value(int32false_gt);
    Int32Value* int32wrap_false_gte = person.mutable_int32false_gte();
    int32wrap_false_gte->set_value(int32false_gte);
    Int32Value* int32wrap_false_gte2 = person.mutable_int32false_gte2();
    int32wrap_false_gte2->set_value(int32false_gte2);

    
    // int64
    Int64Value* int64wrap_true_equal = person.mutable_int64true_equal();
    int64wrap_true_equal->set_value(int64true_equal);  
    Int64Value* int64wrap_true_lt = person.mutable_int64true_lt();
    int64wrap_true_lt->set_value(int64true_lt);
    Int64Value* int64wrap_true_lte = person.mutable_int64true_lte();
    int64wrap_true_lte->set_value(int64true_lte);
    Int64Value* int64wrap_true_lte2 = person.mutable_int64true_lte2();
    int64wrap_true_lte2->set_value(int64true_lte2);
    Int64Value* int64wrap_true_gt = person.mutable_int64true_gt();
    int64wrap_true_gt->set_value(int64true_gt);
    Int64Value* int64wrap_true_gte = person.mutable_int64true_gte();
    int64wrap_true_gte->set_value(int64true_gte);
    Int64Value* int64wrap_true_gte2 = person.mutable_int64true_gte2();
    int64wrap_true_gte2->set_value(int64true_gte2);
    Int64Value* int64wrap_false_equal = person.mutable_int64false_equal();
    int64wrap_false_equal->set_value(int64false_equal);
    Int64Value* int64wrap_false_lt = person.mutable_int64false_lt();
    int64wrap_false_lt->set_value(int64false_lt);
    Int64Value* int64wrap_false_lte = person.mutable_int64false_lte();
    int64wrap_false_lte->set_value(int64false_lte);
    Int64Value* int64wrap_false_lte2 = person.mutable_int64false_lte2();
    int64wrap_false_lte2->set_value(int64false_lte2);
    Int64Value* int64wrap_false_gt = person.mutable_int64false_gt();
    int64wrap_false_gt->set_value(int64false_gt);
    Int64Value* int64wrap_false_gte = person.mutable_int64false_gte();
    int64wrap_false_gte->set_value(int64false_gte);
    Int64Value* int64wrap_false_gte2 = person.mutable_int64false_gte2();
    int64wrap_false_gte2->set_value(int64false_gte2);

    
    // uint32
    UInt32Value* uint32wrap_true_equal = person.mutable_uint32true_equal();
    uint32wrap_true_equal->set_value(uint32true_equal);  
    UInt32Value* uint32wrap_true_lt = person.mutable_uint32true_lt();
    uint32wrap_true_lt->set_value(uint32true_lt);
    UInt32Value* uint32wrap_true_lte = person.mutable_uint32true_lte();
    uint32wrap_true_lte->set_value(uint32true_lte);
    UInt32Value* uint32wrap_true_lte2 = person.mutable_uint32true_lte2();
    uint32wrap_true_lte2->set_value(uint32true_lte2);
    UInt32Value* uint32wrap_true_gt = person.mutable_uint32true_gt();
    uint32wrap_true_gt->set_value(uint32true_gt);
    UInt32Value* uint32wrap_true_gte = person.mutable_uint32true_gte();
    uint32wrap_true_gte->set_value(uint32true_gte);
    UInt32Value* uint32wrap_true_gte2 = person.mutable_uint32true_gte2();
    uint32wrap_true_gte2->set_value(uint32true_gte2);
    UInt32Value* uint32wrap_false_equal = person.mutable_uint32false_equal();
    uint32wrap_false_equal->set_value(uint32false_equal);
    UInt32Value* uint32wrap_false_lt = person.mutable_uint32false_lt();
    uint32wrap_false_lt->set_value(uint32false_lt);
    UInt32Value* uint32wrap_false_lte = person.mutable_uint32false_lte();
    uint32wrap_false_lte->set_value(uint32false_lte);
    UInt32Value* uint32wrap_false_lte2 = person.mutable_uint32false_lte2();
    uint32wrap_false_lte2->set_value(uint32false_lte2);
    UInt32Value* uint32wrap_false_gt = person.mutable_uint32false_gt();
    uint32wrap_false_gt->set_value(uint32false_gt);
    UInt32Value* uint32wrap_false_gte = person.mutable_uint32false_gte();
    uint32wrap_false_gte->set_value(uint32false_gte);
    UInt32Value* uint32wrap_false_gte2 = person.mutable_uint32false_gte2();
    uint32wrap_false_gte2->set_value(uint32false_gte2);
    
    
    // uint64
    UInt64Value* uint64wrap_true_equal = person.mutable_uint64true_equal();
    uint64wrap_true_equal->set_value(uint64true_equal);  
    UInt64Value* uint64wrap_true_lt = person.mutable_uint64true_lt();
    uint64wrap_true_lt->set_value(uint64true_lt);
    UInt64Value* uint64wrap_true_lte = person.mutable_uint64true_lte();
    uint64wrap_true_lte->set_value(uint64true_lte);
    UInt64Value* uint64wrap_true_lte2 = person.mutable_uint64true_lte2();
    uint64wrap_true_lte2->set_value(uint64true_lte2);
    UInt64Value* uint64wrap_true_gt = person.mutable_uint64true_gt();
    uint64wrap_true_gt->set_value(uint64true_gt);
    UInt64Value* uint64wrap_true_gte = person.mutable_uint64true_gte();
    uint64wrap_true_gte->set_value(uint64true_gte);
    UInt64Value* uint64wrap_true_gte2 = person.mutable_uint64true_gte2();
    uint64wrap_true_gte2->set_value(uint64true_gte2);
    UInt64Value* uint64wrap_false_equal = person.mutable_uint64false_equal();
    uint64wrap_false_equal->set_value(uint64false_equal);
    UInt64Value* uint64wrap_false_lt = person.mutable_uint64false_lt();
    uint64wrap_false_lt->set_value(uint64false_lt);
    UInt64Value* uint64wrap_false_lte = person.mutable_uint64false_lte();
    uint64wrap_false_lte->set_value(uint64false_lte);
    UInt64Value* uint64wrap_false_lte2 = person.mutable_uint64false_lte2();
    uint64wrap_false_lte2->set_value(uint64false_lte2);
    UInt64Value* uint64wrap_false_gt = person.mutable_uint64false_gt();
    uint64wrap_false_gt->set_value(uint64false_gt);
    UInt64Value* uint64wrap_false_gte = person.mutable_uint64false_gte();
    uint64wrap_false_gte->set_value(uint64false_gte);
    UInt64Value* uint64wrap_false_gte2 = person.mutable_uint64false_gte2();
    uint64wrap_false_gte2->set_value(uint64false_gte2);


    // Write the new person back to disk.
    fstream output("p1.data", ios::out | ios::trunc | ios::binary);
    if (!person.SerializeToOstream(&output)) {
      cerr << "Failed to write person." << endl;
      return messageStatus;
    }
    
    Validator v;
   
    messageStatus = v.validate(person);
     
    

    return messageStatus;
}