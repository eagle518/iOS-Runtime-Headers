/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@class GKFairPlaySAPSession, NSData, NSDictionary, NSInputStream, NSString, NSURL, NSURLRequestInternal;

@interface NSURLRequest : NSObject <NSSecureCoding, NSCopying, NSMutableCopying> {
    NSURLRequestInternal *_internal;
}

@property(copy,readonly) NSData * HTTPBody;
@property(retain,readonly) NSInputStream * HTTPBodyStream;
@property(copy,readonly) NSString * HTTPMethod;
@property(readonly) BOOL HTTPShouldHandleCookies;
@property(readonly) BOOL HTTPShouldUsePipelining;
@property(copy,readonly) NSURL * URL;
@property(getter=_gkSAPSession,setter=_gkSetSAPSession:,retain) GKFairPlaySAPSession * _gkSAPSession;
@property(copy,readonly) NSDictionary * allHTTPHeaderFields;
@property(readonly) BOOL allowsCellularAccess;
@property(readonly) unsigned int cachePolicy;
@property(copy,readonly) NSURL * mainDocumentURL;
@property(readonly) unsigned int networkServiceType;
@property(readonly) double timeoutInterval;

+ (BOOL)allowsAnyHTTPSCertificateForHost:(id)arg1;
+ (id)allowsSpecificHTTPSCertificateForHost:(id)arg1;
+ (double)defaultTimeoutInterval;
+ (id)getObjectKeyWithIndex:(long)arg1;
+ (id)requestWithURL:(id)arg1 cachePolicy:(unsigned int)arg2 timeoutInterval:(double)arg3;
+ (id)requestWithURL:(id)arg1;
+ (void)setAllowsAnyHTTPSCertificate:(BOOL)arg1 forHost:(id)arg2;
+ (void)setAllowsSpecificHTTPSCertificate:(id)arg1 forHost:(id)arg2;
+ (void)setDefaultTimeoutInterval:(double)arg1;
+ (BOOL)supportsSecureCoding;

- (id)DARequestByApplyingStorageSession:(struct __CFURLStorageSession { }*)arg1;
- (id)HTTPBody;
- (id)HTTPBodyStream;
- (id)HTTPBodyString;
- (id)HTTPContentType;
- (id)HTTPExtraCookies;
- (id)HTTPMethod;
- (id)HTTPReferrer;
- (BOOL)HTTPShouldHandleCookies;
- (BOOL)HTTPShouldUsePipelining;
- (id)HTTPUserAgent;
- (id)URL;
- (struct _CFURLRequest { }*)_CFURLRequest;
- (BOOL)_URLHasScheme:(id)arg1;
- (id)_copyReplacingURLWithURL:(id)arg1;
- (id)_gkDictionaryKey;
- (id)_gkSAPSession;
- (void)_gkSetSAPSession:(id)arg1;
- (id)_initWithCFURLRequest:(struct _CFURLRequest { }*)arg1;
- (BOOL)_isSafeRequestForBackgroundDownload;
- (id)_propertyForKey:(id)arg1;
- (void)_removePropertyForKey:(id)arg1;
- (void)_setProperty:(id)arg1 forKey:(id)arg2;
- (double)_timeWindowDelay;
- (double)_timeWindowDuration;
- (id)_web_HTTPContentType;
- (id)_web_HTTPReferrer;
- (BOOL)_web_isConditionalRequest;
- (id)allHTTPHeaderFields;
- (BOOL)allowsCellularAccess;
- (id)boundInterfaceIdentifier;
- (unsigned int)cachePolicy;
- (id)contentDispositionEncodingFallbackArray;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)expectedWorkload;
- (unsigned int)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 cachePolicy:(unsigned int)arg2 timeoutInterval:(double)arg3;
- (id)initWithURL:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)mainDocumentURL;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)networkServiceType;
- (double)timeoutInterval;
- (id)valueForHTTPHeaderField:(id)arg1;

@end
