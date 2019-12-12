//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct Argument {
    void *_field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned short _field5;
    unsigned short _field6;
};

struct CaptureInfo {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    id _field5;
    id _field6;
    struct unordered_map<dispatch_queue_s *, std::__1::basic_string<char>, std::__1::hash<dispatch_queue_s *>, std::__1::equal_to<dispatch_queue_s *>, std::__1::allocator<std::__1::pair<dispatch_queue_s *const, std::__1::basic_string<char>>>> _field7;
    struct unordered_map<unsigned long long, std::__1::basic_string<char>, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, std::__1::basic_string<char>>>> _field8;
};

struct CoreFunction {
    unsigned int _field1;
    unsigned int _field2;
    unsigned short _field3;
    unsigned short _field4;
    union {
        unsigned long long _field1;
        unsigned long long _field2;
    } _field5;
    struct Argument _field6;
    struct Argument _field7[16];
    unsigned int _field8;
    unsigned int _field9;
    void *_field10;
    void *_field11;
};

struct Fbuf {
    CDUnion_8f472182 _field1;
    void *_field2;
    unsigned int _field3;
};

struct Function {
    struct CoreFunction _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long *_field4;
    unsigned short _field5;
    unsigned short _field6;
    int _field7;
    void *_field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned long long _field11;
    unsigned long long _field12;
    struct Function *_field13;
    void *_field14;
};

struct Stream {
    struct VMBuffer *_field1;
    CDUnion_8f472182 _field2;
    void *_field3;
    unsigned long long _field4;
    struct __CFString *_field5;
    CDUnknownBlockType _field6;
    CDUnknownBlockType _field7;
    int _field8;
    _Bool _field9;
};

struct VMBuffer {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
};

struct _IntKeyedDictionaryPrivate {
    struct unordered_map<long long, id<NSObject>, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, id<NSObject>>>> _field1;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct __hash_node<std::__1::__hash_value_type<dispatch_queue_s *, std::__1::basic_string<char>>, void *>;

struct __hash_node<std::__1::__hash_value_type<long long, id<NSObject>>, void *>;

struct __hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::basic_string<char>>, void *>;

struct array_iterator<const GPUTools::FD::Argument> {
    struct Argument *_field1;
};

struct dy_transport_message_header {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
};

struct dy_transport_message_unpack_s {
    struct dy_transport_message_header _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    _Bool _field6;
};

struct iovec {
    void *iov_base;
    unsigned long long iov_len;
};

struct sm_region_header {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
};

struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<dispatch_queue_s *, std::__1::basic_string<char>>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<dispatch_queue_s *, std::__1::basic_string<char>>, void *>*>>> {
    struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<dispatch_queue_s *, std::__1::basic_string<char>>, void *>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<dispatch_queue_s *, std::__1::basic_string<char>>, void *>*>>> {
        struct __hash_node<std::__1::__hash_value_type<dispatch_queue_s *, std::__1::basic_string<char>>, void *> **_field1;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<dispatch_queue_s *, std::__1::basic_string<char>>, void *>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<dispatch_queue_s *, std::__1::basic_string<char>>, void *>*>> {
                unsigned long long _field1;
            } _field1;
        } _field2;
    } _field1;
};

struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<long long, id<NSObject>>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long long, id<NSObject>>, void *>*>>> {
    struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<long long, id<NSObject>>, void *>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long long, id<NSObject>>, void *>*>>> {
        struct __hash_node<std::__1::__hash_value_type<long long, id<NSObject>>, void *> **_field1;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long long, id<NSObject>>, void *>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long long, id<NSObject>>, void *>*>> {
                unsigned long long _field1;
            } _field1;
        } _field2;
    } _field1;
};

struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::basic_string<char>>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::basic_string<char>>, void *>*>>> {
    struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::basic_string<char>>, void *>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::basic_string<char>>, void *>*>>> {
        struct __hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::basic_string<char>>, void *> **_field1;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::basic_string<char>>, void *>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::basic_string<char>>, void *>*>> {
                unsigned long long _field1;
            } _field1;
        } _field2;
    } _field1;
};

struct unordered_map<dispatch_queue_s *, std::__1::basic_string<char>, std::__1::hash<dispatch_queue_s *>, std::__1::equal_to<dispatch_queue_s *>, std::__1::allocator<std::__1::pair<dispatch_queue_s *const, std::__1::basic_string<char>>>> {
    struct __hash_table<std::__1::__hash_value_type<dispatch_queue_s *, std::__1::basic_string<char>>, std::__1::__unordered_map_hasher<dispatch_queue_s *, std::__1::__hash_value_type<dispatch_queue_s *, std::__1::basic_string<char>>, std::__1::hash<dispatch_queue_s *>, true>, std::__1::__unordered_map_equal<dispatch_queue_s *, std::__1::__hash_value_type<dispatch_queue_s *, std::__1::basic_string<char>>, std::__1::equal_to<dispatch_queue_s *>, true>, std::__1::allocator<std::__1::__hash_value_type<dispatch_queue_s *, std::__1::basic_string<char>>>> {
        struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<dispatch_queue_s *, std::__1::basic_string<char>>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<dispatch_queue_s *, std::__1::basic_string<char>>, void *>*>>> _field1;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<dispatch_queue_s *, std::__1::basic_string<char>>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<dispatch_queue_s *, std::__1::basic_string<char>>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<dispatch_queue_s *, std::__1::basic_string<char>>, void *>*> {
                struct __hash_node<std::__1::__hash_value_type<dispatch_queue_s *, std::__1::basic_string<char>>, void *> *_field1;
            } _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<dispatch_queue_s *, std::__1::__hash_value_type<dispatch_queue_s *, std::__1::basic_string<char>>, std::__1::hash<dispatch_queue_s *>, true>> {
            unsigned long long _field1;
        } _field3;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<dispatch_queue_s *, std::__1::__hash_value_type<dispatch_queue_s *, std::__1::basic_string<char>>, std::__1::equal_to<dispatch_queue_s *>, true>> {
            float _field1;
        } _field4;
    } _field1;
};

struct unordered_map<long long, id<NSObject>, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, id<NSObject>>>> {
    struct __hash_table<std::__1::__hash_value_type<long long, id<NSObject>>, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, id<NSObject>>, std::__1::hash<long long>, true>, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, id<NSObject>>, std::__1::equal_to<long long>, true>, std::__1::allocator<std::__1::__hash_value_type<long long, id<NSObject>>>> {
        struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<long long, id<NSObject>>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long long, id<NSObject>>, void *>*>>> _field1;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, id<NSObject>>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long long, id<NSObject>>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, id<NSObject>>, void *>*> {
                struct __hash_node<std::__1::__hash_value_type<long long, id<NSObject>>, void *> *_field1;
            } _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, id<NSObject>>, std::__1::hash<long long>, true>> {
            unsigned long long _field1;
        } _field3;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, id<NSObject>>, std::__1::equal_to<long long>, true>> {
            float _field1;
        } _field4;
    } _field1;
};

struct unordered_map<unsigned long long, std::__1::basic_string<char>, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, std::__1::basic_string<char>>>> {
    struct __hash_table<std::__1::__hash_value_type<unsigned long long, std::__1::basic_string<char>>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::basic_string<char>>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::basic_string<char>>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, std::__1::basic_string<char>>>> {
        struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::basic_string<char>>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::basic_string<char>>, void *>*>>> _field1;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::basic_string<char>>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::basic_string<char>>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::basic_string<char>>, void *>*> {
                struct __hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::basic_string<char>>, void *> *_field1;
            } _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::basic_string<char>>, std::__1::hash<unsigned long long>, true>> {
            unsigned long long _field1;
        } _field3;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::basic_string<char>>, std::__1::equal_to<unsigned long long>, true>> {
            float _field1;
        } _field4;
    } _field1;
};

#pragma mark Typedef'd Structures

// Template types
typedef struct array_iterator<const GPUTools::FD::Argument> {
    struct Argument *_field1;
} array_iterator_bff672d3;

#pragma mark Typedef'd Unions

typedef union {
    void *_field1;
    struct *_field2;
} CDUnion_8f472182;

