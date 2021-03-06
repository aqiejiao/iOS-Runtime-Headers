/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKServerConfigurationRequestOperation : NSOperation {
    NSError * _error;
    NSString * _nextEK;
    id /* block */  _requestCompletionBlock;
    WLKServerConfigurationResponse * _response;
    WLKUserEnvironment * _userEnvironment;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, retain) NSString *nextEK;
@property (nonatomic, copy) id /* block */ requestCompletionBlock;
@property (nonatomic, readonly) WLKServerConfigurationResponse *response;
@property (nonatomic, readonly) WLKUserEnvironment *userEnvironment;

+ (id)_caller;

- (void).cxx_destruct;
- (id)_consentQueryString;
- (id)_defaultBaseURL;
- (id)_entitlementsQueryString;
- (void)_failWithError:(id)arg1;
- (void)_finishWithResponse:(id)arg1;
- (id)_queryStringForKey:(id)arg1 values:(id)arg2;
- (id)_requestProperties;
- (id)_runNetworkOperationAndReturnError:(id*)arg1;
- (id)error;
- (id)init;
- (void)main;
- (id)nextEK;
- (id /* block */)requestCompletionBlock;
- (id)response;
- (void)setNextEK:(id)arg1;
- (void)setRequestCompletionBlock:(id /* block */)arg1;
- (id)userEnvironment;

@end
