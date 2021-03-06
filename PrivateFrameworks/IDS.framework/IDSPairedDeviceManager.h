/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@class NSSet, NSString, _IDSCompletionHandler;

@interface IDSPairedDeviceManager : NSObject <IDSDaemonListenerProtocol> {
    NSSet *_allowedTrafficClassifiers;
    _IDSCompletionHandler *_deleteCompletion;
    _IDSCompletionHandler *_deliveryStatsCompletion;
    _IDSCompletionHandler *_localCompletion;
    _IDSCompletionHandler *_pairedCompletion;
}

@property(retain) NSSet * allowedTrafficClassifiers;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (id)sharedInstance;

- (id)allowedTrafficClassifiers;
- (void)dealloc;
- (void)deletePairedDevice:(id)arg1 withCompletionBlock:(id)arg2 queue:(id)arg3;
- (void)deliveryStats:(id)arg1;
- (void)device:(id)arg1 pairingAdded:(BOOL)arg2;
- (void)device:(id)arg1 pairingDeleted:(BOOL)arg2;
- (void)dropAllMessagesWithoutAnyAllowedClassifier;
- (void)getDeliveryStatsWithCompletionBlock:(id)arg1 queue:(id)arg2;
- (void)getLocalDeviceInfoWithCompletionBlock:(id)arg1 queue:(id)arg2;
- (void)getPairedDeviceInfoWithCompletionBlock:(id)arg1 queue:(id)arg2;
- (id)init;
- (void)localDeviceInfo:(id)arg1;
- (void)pairedDeviceInfo:(id)arg1;
- (void)setAllowedTrafficClassifiers:(id)arg1;
- (void)setPairedDeviceInfo:(id)arg1;

@end
