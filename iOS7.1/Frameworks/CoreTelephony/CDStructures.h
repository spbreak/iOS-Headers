//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CTServerState;

struct __CTServerConnection {
    struct __CFRuntimeBase {
        unsigned int _field1;
        unsigned char _field2[4];
    } _field1;
    struct dispatch_queue_s *_field2;
    struct CTServerState *_field3;
    unsigned char _field4;
    unsigned int _field5;
    struct _xpc_connection_s *_field6;
};

struct block<void (^)(NSDictionary *)>;

struct dispatch_object_s;

struct dispatch_queue_s;

struct queue {
    struct dispatch_object_s *fObj;
};

struct vector<dispatch::block<void (^)(NSDictionary *)>, std::__1::allocator<dispatch::block<void (^)(NSDictionary *)>>> {
    struct block<void (^)(NSDictionary *)> *__begin_;
    struct block<void (^)(NSDictionary *)> *__end_;
    struct __compressed_pair<dispatch::block<void (^)(NSDictionary *)>*, std::__1::allocator<dispatch::block<void (^)(NSDictionary *)>>> {
        struct block<void (^)(NSDictionary *)> *__first_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    int _field1;
    int _field2;
} CDStruct_1ef3fb1f;
