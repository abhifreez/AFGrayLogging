#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class KmmsharedmoduleAFGrayLoggerLogLevel, KmmsharedmoduleAFLoggerInfo, KmmsharedmoduleKotlinEnum<E>, NSDictionary, KmmsharedmoduleKotlinx_coroutines_coreCoroutineDispatcher, KmmsharedmoduleKotlinArray<T>, KmmsharedmoduleKotlinAbstractCoroutineContextElement;

@protocol KmmsharedmoduleKotlinComparable, KmmsharedmoduleKotlinCoroutineContextKey, KmmsharedmoduleKotlinCoroutineContextElement, KmmsharedmoduleKotlinCoroutineContext, KmmsharedmoduleKotlinContinuation, KmmsharedmoduleKotlinContinuationInterceptor, KmmsharedmoduleKotlinx_coroutines_coreRunnable, KmmsharedmoduleKotlinIterator;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

__attribute__((swift_name("KotlinBase")))
@interface KmmsharedmoduleBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface KmmsharedmoduleBase (KmmsharedmoduleBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface KmmsharedmoduleMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface KmmsharedmoduleMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorKmmsharedmoduleKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface KmmsharedmoduleNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface KmmsharedmoduleByte : KmmsharedmoduleNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface KmmsharedmoduleUByte : KmmsharedmoduleNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface KmmsharedmoduleShort : KmmsharedmoduleNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface KmmsharedmoduleUShort : KmmsharedmoduleNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface KmmsharedmoduleInt : KmmsharedmoduleNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface KmmsharedmoduleUInt : KmmsharedmoduleNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface KmmsharedmoduleLong : KmmsharedmoduleNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface KmmsharedmoduleULong : KmmsharedmoduleNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface KmmsharedmoduleFloat : KmmsharedmoduleNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface KmmsharedmoduleDouble : KmmsharedmoduleNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface KmmsharedmoduleBoolean : KmmsharedmoduleNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AFGrayLogger")))
@interface KmmsharedmoduleAFGrayLogger : KmmsharedmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)getDebugTypeDebugLevel:(int32_t)debugLevel __attribute__((swift_name("getDebugType(debugLevel:)")));
- (NSString *)makeBodyVersion:(NSString *)version host:(NSString *)host shrt_message:(NSString *)shrt_message longMessage:(NSString *)longMessage level:(int32_t)level logType:(NSString *)logType trackId:(NSString *)trackId __attribute__((swift_name("makeBody(version:host:shrt_message:longMessage:level:logType:trackId:)")));
- (void)remoteLogLoglevel:(KmmsharedmoduleAFGrayLoggerLogLevel *)loglevel msg:(id)msg tag:(NSString *)tag trackId:(NSString *)trackId appInfo:(KmmsharedmoduleAFLoggerInfo *)appInfo __attribute__((swift_name("remoteLog(loglevel:msg:tag:trackId:appInfo:)")));
- (void)setServerAddressUrl:(NSString *)url __attribute__((swift_name("setServerAddress(url:)")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol KmmsharedmoduleKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface KmmsharedmoduleKotlinEnum<E> : KmmsharedmoduleBase <KmmsharedmoduleKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AFGrayLogger.LogLevel")))
@interface KmmsharedmoduleAFGrayLoggerLogLevel : KmmsharedmoduleKotlinEnum<KmmsharedmoduleAFGrayLoggerLogLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KmmsharedmoduleAFGrayLoggerLogLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) KmmsharedmoduleAFGrayLoggerLogLevel *error __attribute__((swift_name("error")));
@property (class, readonly) KmmsharedmoduleAFGrayLoggerLogLevel *info __attribute__((swift_name("info")));
@property (class, readonly) KmmsharedmoduleAFGrayLoggerLogLevel *warning __attribute__((swift_name("warning")));
@property (readonly) int32_t level __attribute__((swift_name("level")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AFKNNetworkRequest")))
@interface KmmsharedmoduleAFKNNetworkRequest : KmmsharedmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)thirdPartyRequestCompilation:(KmmsharedmoduleInt *(^)(id))compilation url:(NSString *)url data:(NSString *)data __attribute__((swift_name("thirdPartyRequest(compilation:url:data:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AFKNPlatformUtil")))
@interface KmmsharedmoduleAFKNPlatformUtil : KmmsharedmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSDictionary<NSString *, id> *)getHashMapFromJsonStringString:(NSString *)string __attribute__((swift_name("getHashMapFromJsonString(string:)")));
- (KmmsharedmoduleMutableDictionary<NSString *, id> *)getMapFormDictDict:(NSDictionary *)dict __attribute__((swift_name("getMapFormDict(dict:)")));
- (void)logObj:(id)obj __attribute__((swift_name("log(obj:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AFLoggerInfo")))
@interface KmmsharedmoduleAFLoggerInfo : KmmsharedmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AFLoging")))
@interface KmmsharedmoduleAFLoging : KmmsharedmoduleBase
- (instancetype)initWithIsLocalLoggingEnable:(BOOL)isLocalLoggingEnable isRemoteLoggingEnable:(BOOL)isRemoteLoggingEnable trackId:(NSString *)trackId appVersion:(NSString *)appVersion host:(NSString *)host serverAddess:(NSString *)serverAddess __attribute__((swift_name("init(isLocalLoggingEnable:isRemoteLoggingEnable:trackId:appVersion:host:serverAddess:)"))) __attribute__((objc_designated_initializer));
- (void)debugMsg:(id)msg tag:(NSString *)tag __attribute__((swift_name("debug(msg:tag:)")));
- (void)errorMsg:(id)msg tag:(NSString *)tag __attribute__((swift_name("error(msg:tag:)")));
- (void)infoMsg:(id)msg tag:(NSString *)tag __attribute__((swift_name("info(msg:tag:)")));
- (void)setLocalLoggingIsEnable:(BOOL)isEnable __attribute__((swift_name("setLocalLogging(isEnable:)")));
- (void)setRemoteLoggingIsEnable:(BOOL)isEnable __attribute__((swift_name("setRemoteLogging(isEnable:)")));
- (void)setServerAddressUrl:(NSString *)url __attribute__((swift_name("setServerAddress(url:)")));
- (void)setTrackIdTrackId:(NSString *)trackId __attribute__((swift_name("setTrackId(trackId:)")));
- (void)warningMsg:(id)msg tag:(NSString *)tag __attribute__((swift_name("warning(msg:tag:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AFPlatformLogger")))
@interface KmmsharedmoduleAFPlatformLogger : KmmsharedmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)aFPlatformLogger __attribute__((swift_name("init()")));
- (void)debugObj:(id)obj tag:(NSString *)tag __attribute__((swift_name("debug(obj:tag:)")));
- (void)errorObj:(id)obj tag:(NSString *)tag __attribute__((swift_name("error(obj:tag:)")));
- (NSString *)getMsgFormatType:(NSString *)type tag:(NSString *)tag obj:(id)obj __attribute__((swift_name("getMsgFormat(type:tag:obj:)")));
- (void)infoObj:(id)obj tag:(NSString *)tag __attribute__((swift_name("info(obj:tag:)")));
- (void)warningObj:(id)obj tag:(NSString *)tag __attribute__((swift_name("warning(obj:tag:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AFTestClass")))
@interface KmmsharedmoduleAFTestClass : KmmsharedmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)test __attribute__((swift_name("test()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DCBroadcastUtils")))
@interface KmmsharedmoduleDCBroadcastUtils : KmmsharedmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)sendBroadcastContext:(id _Nullable)context intentType:(NSString * _Nullable)intentType broadcastKey:(KmmsharedmoduleInt * _Nullable)broadcastKey broadcastValue:(id _Nullable)broadcastValue forId:(KmmsharedmoduleInt * _Nullable)forId __attribute__((swift_name("sendBroadcast(context:intentType:broadcastKey:broadcastValue:forId:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GelfModel")))
@interface KmmsharedmoduleGelfModel : KmmsharedmoduleBase
- (instancetype)initWithVersion:(NSString *)version host:(NSString *)host shrt_message:(NSString *)shrt_message longMessage:(NSString *)longMessage lever:(int32_t)lever logType:(NSString *)logType __attribute__((swift_name("init(version:host:shrt_message:longMessage:lever:logType:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Greeting")))
@interface KmmsharedmoduleGreeting : KmmsharedmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)greeting __attribute__((swift_name("greeting()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Proxy")))
@interface KmmsharedmoduleProxy : KmmsharedmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)proxyHello __attribute__((swift_name("proxyHello()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Sample")))
@interface KmmsharedmoduleSample : KmmsharedmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (int32_t)checkMe __attribute__((swift_name("checkMe()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Test")))
@interface KmmsharedmoduleTest : KmmsharedmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)testRequestBlock:(void (^)(KmmsharedmoduleInt *))block __attribute__((swift_name("testRequest(block:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApplicationDispatcherKt")))
@interface KmmsharedmoduleApplicationDispatcherKt : KmmsharedmoduleBase
@property (class, readonly) KmmsharedmoduleKotlinx_coroutines_coreCoroutineDispatcher *ApplicationDispatcher __attribute__((swift_name("ApplicationDispatcher")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SampleKt")))
@interface KmmsharedmoduleSampleKt : KmmsharedmoduleBase
+ (NSString *)hello __attribute__((swift_name("hello()")));
+ (void)mainArgs:(KmmsharedmoduleKotlinArray<NSString *> *)args __attribute__((swift_name("main(args:)")));
@end;

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol KmmsharedmoduleKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<KmmsharedmoduleKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<KmmsharedmoduleKotlinCoroutineContextElement> _Nullable)getKey:(id<KmmsharedmoduleKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<KmmsharedmoduleKotlinCoroutineContext>)minusKeyKey:(id<KmmsharedmoduleKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<KmmsharedmoduleKotlinCoroutineContext>)plusContext:(id<KmmsharedmoduleKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol KmmsharedmoduleKotlinCoroutineContextElement <KmmsharedmoduleKotlinCoroutineContext>
@required
@property (readonly) id<KmmsharedmoduleKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface KmmsharedmoduleKotlinAbstractCoroutineContextElement : KmmsharedmoduleBase <KmmsharedmoduleKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<KmmsharedmoduleKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<KmmsharedmoduleKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol KmmsharedmoduleKotlinContinuationInterceptor <KmmsharedmoduleKotlinCoroutineContextElement>
@required
- (id<KmmsharedmoduleKotlinContinuation>)interceptContinuationContinuation:(id<KmmsharedmoduleKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<KmmsharedmoduleKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface KmmsharedmoduleKotlinx_coroutines_coreCoroutineDispatcher : KmmsharedmoduleKotlinAbstractCoroutineContextElement <KmmsharedmoduleKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<KmmsharedmoduleKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)dispatchContext:(id<KmmsharedmoduleKotlinCoroutineContext>)context block:(id<KmmsharedmoduleKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<KmmsharedmoduleKotlinCoroutineContext>)context block:(id<KmmsharedmoduleKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<KmmsharedmoduleKotlinContinuation>)interceptContinuationContinuation:(id<KmmsharedmoduleKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<KmmsharedmoduleKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (KmmsharedmoduleKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(KmmsharedmoduleKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<KmmsharedmoduleKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface KmmsharedmoduleKotlinArray<T> : KmmsharedmoduleBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(KmmsharedmoduleInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<KmmsharedmoduleKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol KmmsharedmoduleKotlinCoroutineContextKey
@required
@end;

__attribute__((swift_name("KotlinContinuation")))
@protocol KmmsharedmoduleKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<KmmsharedmoduleKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol KmmsharedmoduleKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol KmmsharedmoduleKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
