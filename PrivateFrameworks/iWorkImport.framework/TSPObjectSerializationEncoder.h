/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPObjectSerializationEncoder : NSObject <TSPEncoder> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    bool  _alwaysDefragmentData;
    struct ObjectSerializationDirectory { 
        int (**_vptr$MessageLite)(); 
        struct UnknownFieldSet { 
            struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *fields_; 
        } _unknown_fields_; 
        unsigned int _has_bits_[1]; 
        int _cached_size_; 
        struct RepeatedPtrField<TSP::ObjectSerializationDirectory_Entry> { 
            void **elements_; 
            int current_size_; 
            int allocated_size_; 
            int total_size_; 
        } entries_; 
    }  _directory;
    NSObject<OS_dispatch_data> * _encodedData;
    NSError * _error;
    NSObject<OS_dispatch_queue> * _ioQueue;
    bool  _isFinished;
    TSPMemoryComponentWriteChannel * _metadataWriteChannel;
    TSPMemoryComponentWriteChannel * _rootComponentWriteChannel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)appendData:(id)arg1 completion:(id /* block */)arg2;
- (void)finishEncodingWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithAlwaysDefragmentData:(bool)arg1;
- (id)newMetadataComponentWriteChannel;
- (id)newRootObjectComponentWriteChannel;

@end
