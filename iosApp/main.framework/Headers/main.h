#import <Foundation/Foundation.h>

@class MainAFKNConstant, MainDCNetworkRequestHeader, MainAFKNBaseRequest, MainAFKNBaseRequestRequestType, MainKotlinEnum, MainAFKNBaseRequestCompanion, MainAFKNResponceFormat, MainAFKNNetworkRequest, MainKtor_httpHttpMethod, MainAFKNNetworkResponse, MainAFKNNetworkRequestAFKNNetworkRequestType, MainAFKNError, MainAFKNNetworkResponseCompanion, MainDCKNAnalyticEvent, MainDCKNManager, MainDCKNUrls, MainDCKNUserInfo, MainDCKNDeviceInfo, MainDCKNUtil, MainDCKNUtilCompanion, MainDocTalkBModel, MainKotlinUnit, MainSample, MainAFKNPlatformUtil, NSDictionary, MainTest, MainPlatform, MainProxy, MainDcDocTalkBModel, MainDCSpeakerBModel, MainDKDTSeries, MainAFKNMediaBModel, MainAFKNShareBModel, MainAFKNMediaBModelCompanion, MainAFKNSpecialityBModel, MainDCBannerBModel, MainDCSpeakerBModelCompanion, MainDKChatBot, MainDKChatAgent, MainDKLocation, MainDKLocationCompanion, MainDKLCordinates, MainDKLAddress, MainDcDocCategoryBModel, MainKotlinArray;

@protocol MainKotlinComparable, MainKotlinIterator;

NS_ASSUME_NONNULL_BEGIN

@interface KotlinBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface KotlinBase (KotlinBaseCopying) <NSCopying>
@end;

__attribute__((objc_runtime_name("KotlinMutableSet")))
__attribute__((swift_name("KotlinMutableSet")))
@interface MainMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((objc_runtime_name("KotlinMutableDictionary")))
__attribute__((swift_name("KotlinMutableDictionary")))
@interface MainMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((objc_runtime_name("KotlinNumber")))
__attribute__((swift_name("KotlinNumber")))
@interface MainNumber : NSNumber
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

__attribute__((objc_runtime_name("KotlinByte")))
__attribute__((swift_name("KotlinByte")))
@interface MainByte : MainNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((objc_runtime_name("KotlinUByte")))
__attribute__((swift_name("KotlinUByte")))
@interface MainUByte : MainNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((objc_runtime_name("KotlinShort")))
__attribute__((swift_name("KotlinShort")))
@interface MainShort : MainNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((objc_runtime_name("KotlinUShort")))
__attribute__((swift_name("KotlinUShort")))
@interface MainUShort : MainNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((objc_runtime_name("KotlinInt")))
__attribute__((swift_name("KotlinInt")))
@interface MainInt : MainNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((objc_runtime_name("KotlinUInt")))
__attribute__((swift_name("KotlinUInt")))
@interface MainUInt : MainNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((objc_runtime_name("KotlinLong")))
__attribute__((swift_name("KotlinLong")))
@interface MainLong : MainNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((objc_runtime_name("KotlinULong")))
__attribute__((swift_name("KotlinULong")))
@interface MainULong : MainNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((objc_runtime_name("KotlinFloat")))
__attribute__((swift_name("KotlinFloat")))
@interface MainFloat : MainNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((objc_runtime_name("KotlinDouble")))
__attribute__((swift_name("KotlinDouble")))
@interface MainDouble : MainNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((objc_runtime_name("KotlinBoolean")))
__attribute__((swift_name("KotlinBoolean")))
@interface MainBoolean : MainNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AFKNConstant")))
@interface MainAFKNConstant : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)aFKNConstant __attribute__((swift_name("init()")));
@property (readonly) int32_t RESPONSE_CODE_SUCCESS;
@property (readonly) int32_t RESPONSE_CODE_ERROR;
@property (readonly) int32_t RESPONSE_CODE_EXIT_APP;
@property (readonly) int32_t RESPONSE_CODE_SHOW_READ_ONLY_DIALOG;
@property (readonly) int32_t RESPONSE_CODE_INVALID;
@property (readonly) NSString *ADD_BOOKMARK;
@property (readonly) NSString *POST_LIKE;
@property (readonly) NSString *DOC_TALK_LIST;
@property (readonly) NSString *DOC_CATEGORY_TYPE_BANNER;
@property (readonly) NSString *DOC_CATEGORY_TYPE_FEATURES_VIDEOS;
@property (readonly) NSString *DOC_CATEGORY_TYPE_TOP_SPEAKERS;
@property (readonly) NSString *DOC_CATEGORY_TYPE_SPECIALITY;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DCNetworkRequestHeader")))
@interface MainDCNetworkRequestHeader : KotlinBase
- (instancetype)initWithAuthKey:(NSString *)authKey iso_code:(NSString *)iso_code apiVersion:(NSString *)apiVersion appVersion:(NSString *)appVersion lang:(NSString *)lang deviceType:(NSString *)deviceType tokenId:(NSString *)tokenId authToken:(NSString *)authToken udid:(NSString *)udid __attribute__((swift_name("init(authKey:iso_code:apiVersion:appVersion:lang:deviceType:tokenId:authToken:udid:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (NSString *)component9 __attribute__((swift_name("component9()")));
- (MainDCNetworkRequestHeader *)doCopyAuthKey:(NSString *)authKey iso_code:(NSString *)iso_code apiVersion:(NSString *)apiVersion appVersion:(NSString *)appVersion lang:(NSString *)lang deviceType:(NSString *)deviceType tokenId:(NSString *)tokenId authToken:(NSString *)authToken udid:(NSString *)udid __attribute__((swift_name("doCopy(authKey:iso_code:apiVersion:appVersion:lang:deviceType:tokenId:authToken:udid:)")));
@property NSString *authKey;
@property NSString *iso_code;
@property NSString *apiVersion;
@property NSString *appVersion;
@property NSString *lang;
@property NSString *deviceType;
@property NSString *tokenId;
@property NSString *authToken;
@property NSString *udid;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AFKNBaseRequest")))
@interface MainAFKNBaseRequest : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property MainMutableDictionary<NSString *, id> * _Nullable HEADER_DATA;
@property NSString *BASE_URL;
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol MainKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface MainKotlinEnum : KotlinBase <MainKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(MainKotlinEnum *)other __attribute__((swift_name("compareTo(other:)")));
@property (readonly) NSString *name;
@property (readonly) int32_t ordinal;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AFKNBaseRequest.RequestType")))
@interface MainAFKNBaseRequestRequestType : MainKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) MainAFKNBaseRequestRequestType *theNew;
@property (class, readonly) MainAFKNBaseRequestRequestType *old;
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(MainAFKNBaseRequestRequestType *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AFKNBaseRequest.Companion")))
@interface MainAFKNBaseRequestCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (MainAFKNBaseRequest *)getBaseRequestType:(MainAFKNBaseRequestRequestType *)type __attribute__((swift_name("getBaseRequest(type:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AFKNResponceFormat")))
@interface MainAFKNResponceFormat : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString *parentKey;
@property NSString *statussMsgKey;
@property NSString *statusCodeKey;
@property NSString *successCodeKey;
@property NSString *dataKey;
@property NSString *errorObjectKey;
@property int32_t sucessCodeValue;
@property NSArray<MainInt *> *sucessCodeValueArray;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AFKNNetworkRequest")))
@interface MainAFKNNetworkRequest : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MainKtor_httpHttpMethod *)getRequestType __attribute__((swift_name("getRequestType()")));
- (void)makeRequestComplition:(MainInt *(^)(MainAFKNNetworkResponse *))complition __attribute__((swift_name("makeRequest(complition:)")));
- (void)thirdPartyRequestCompilation:(MainInt *(^)(MainAFKNNetworkResponse *))compilation url:(NSString *)url data:(NSString *)data __attribute__((swift_name("thirdPartyRequest(compilation:url:data:)")));
@property MainAFKNBaseRequest *BASE_REQUEST;
@property MainMutableDictionary<NSString *, id> *PARAMS;
@property NSString *API_URL;
@property MainAFKNNetworkRequestAFKNNetworkRequestType *REQUEST_TYPE;
@property MainAFKNResponceFormat *RESPONCE_FORMAT;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AFKNNetworkRequest.AFKNNetworkRequestType")))
@interface MainAFKNNetworkRequestAFKNNetworkRequestType : MainKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) MainAFKNNetworkRequestAFKNNetworkRequestType *get;
@property (class, readonly) MainAFKNNetworkRequestAFKNNetworkRequestType *post;
@property (class, readonly) MainAFKNNetworkRequestAFKNNetworkRequestType *delete;
@property (class, readonly) MainAFKNNetworkRequestAFKNNetworkRequestType *multipart;
@property (class, readonly) MainAFKNNetworkRequestAFKNNetworkRequestType *put;
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(MainAFKNNetworkRequestAFKNNetworkRequestType *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AFKNNetworkResponse")))
@interface MainAFKNNetworkResponse : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property int32_t RESPONCE_STATUS_CODE;
@property NSString *RESPONCE_SUCCESS_MSG;
@property int32_t IS_SUCCESS;
@property MainAFKNError * _Nullable ERROR;
@property id _Nullable RESPONCE_DATA;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AFKNNetworkResponse.Companion")))
@interface MainAFKNNetworkResponseCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (MainAFKNNetworkResponse *)parseHashMapForResponceRequest:(MainAFKNNetworkRequest *)request data:(NSDictionary<NSString *, id> *)data __attribute__((swift_name("parseHashMapForResponce(request:data:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AFKNError")))
@interface MainAFKNError : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property int32_t ERROR_CODE;
@property NSString * _Nullable ERROR_MESSAGE;
@property id _Nullable ERROR_DATA;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DCKNAnalyticEvent")))
@interface MainDCKNAnalyticEvent : KotlinBase
- (instancetype)initWithEventName:(NSString *)eventName productId:(NSString *)productId productType:(NSString *)productType data:(MainMutableDictionary<NSString *, id> *)data __attribute__((swift_name("init(eventName:productId:productType:data:)"))) __attribute__((objc_designated_initializer));
- (void)pushEvent __attribute__((swift_name("pushEvent()")));
@property NSString *eventId;
@property NSString *eventName;
@property NSString *productId;
@property NSString *productType;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DCKNManager")))
@interface MainDCKNManager : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)dCKNManager __attribute__((swift_name("init()")));
- (void)configureAppContextAppContext:(id _Nullable)appContext __attribute__((swift_name("configureAppContext(appContext:)")));
- (void)configureUrlsUrl:(NSString * _Nullable)url __attribute__((swift_name("configureUrls(url:)")));
- (void)configureUserInfoLang:(NSString * _Nullable)lang authorization:(NSString * _Nullable)authorization userauthkey:(NSString * _Nullable)userauthkey __attribute__((swift_name("configureUserInfo(lang:authorization:userauthkey:)")));
- (void)configureDeviceInfoApiVersion:(NSString * _Nullable)apiVersion appVersion:(NSString * _Nullable)appVersion deviceType:(NSString * _Nullable)deviceType udid:(NSString * _Nullable)udid __attribute__((swift_name("configureDeviceInfo(apiVersion:appVersion:deviceType:udid:)")));
@property id _Nullable context;
@property MainDCKNUrls * _Nullable urls;
@property MainDCKNUserInfo * _Nullable userInfo;
@property MainDCKNDeviceInfo * _Nullable deviceInfo;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DCKNUtil")))
@interface MainDCKNUtil : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (int32_t)getRandomColorTypeFirstAlphbet:(NSString * _Nullable)firstAlphbet secondAlphabet:(NSString * _Nullable)secondAlphabet __attribute__((swift_name("getRandomColorType(firstAlphbet:secondAlphabet:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DCKNUtil.Companion")))
@interface MainDCKNUtilCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) int32_t RANDOM_COLOR_1;
@property (readonly) int32_t RANDOM_COLOR_2;
@property (readonly) int32_t RANDOM_COLOR_3;
@property (readonly) int32_t RANDOM_COLOR_4;
@property (readonly) int32_t RANDOM_COLOR_5;
@property (readonly) int32_t RANDOM_COLOR_6;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DocTalkBModel")))
@interface MainDocTalkBModel : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)getDetailsBlock:(MainKotlinUnit *(^)(MainDocTalkBModel *))block __attribute__((swift_name("getDetails(block:)")));
@property MainInt * _Nullable id;
@property id _Nullable type;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Sample")))
@interface MainSample : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (int32_t)checkMe __attribute__((swift_name("checkMe()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AFKNPlatformUtil")))
@interface MainAFKNPlatformUtil : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSDictionary<NSString *, id> *)getHashMapFromJsonStringString:(NSString *)string __attribute__((swift_name("getHashMapFromJsonString(string:)")));
- (MainMutableDictionary<NSString *, id> *)getMapFormDictDict:(NSDictionary *)dict __attribute__((swift_name("getMapFormDict(dict:)")));
- (void)logObj:(id)obj __attribute__((swift_name("log(obj:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Test")))
@interface MainTest : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)testRequestBlock:(MainKotlinUnit *(^)(MainInt *))block __attribute__((swift_name("testRequest(block:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform")))
@interface MainPlatform : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)platform __attribute__((swift_name("init()")));
@property (readonly) NSString *name;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Proxy")))
@interface MainProxy : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)proxyHello __attribute__((swift_name("proxyHello()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DcDocTalkBModel")))
@interface MainDcDocTalkBModel : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MainDcDocTalkBModel *)DcDocTalkBModelJsonDict:(NSDictionary<id, id> *)jsonDict __attribute__((swift_name("DcDocTalkBModel(jsonDict:)")));
- (void)bookmarkBlock:(MainKotlinUnit *(^)(MainBoolean *))block __attribute__((swift_name("bookmark(block:)")));
- (void)likeBlock:(MainKotlinUnit *(^)(MainBoolean *))block __attribute__((swift_name("like(block:)")));
- (void)getDoctalkDetailId:(int32_t)id __attribute__((swift_name("getDoctalkDetail(id:)")));
@property int32_t id;
@property NSString *title;
@property (getter=description_) NSString *description;
@property int64_t publishData;
@property BOOL commentFlag;
@property int32_t episodeIndex;
@property NSMutableArray<MainDCSpeakerBModel *> * _Nullable speakerList;
@property MainDKDTSeries * _Nullable series;
@property BOOL isSeries;
@property int32_t likeCount;
@property int32_t viewsCount;
@property BOOL isLiked;
@property BOOL isBookmarked;
@property NSMutableArray<MainAFKNMediaBModel *> * _Nullable mediaList;
@property MainAFKNShareBModel * _Nullable shareData;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AFKNMediaBModel")))
@interface MainAFKNMediaBModel : KotlinBase
- (instancetype)initWithData:(NSDictionary<NSString *, id> * _Nullable)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
@property NSString * _Nullable id;
@property NSString * _Nullable fileType;
@property NSString * _Nullable fileName;
@property NSString * _Nullable fileUrl;
@property int64_t fileTimeDuration;
@property NSString * _Nullable previewUrl;
@property NSString * _Nullable caption;
@property NSString * _Nullable mediaOriginalUrl;
@property NSString * _Nullable downloadUrlOriginalPath;
@property BOOL isPreviewUploaded;
@property BOOL isMediaFileUploaded;
@property BOOL isCompressNeeded;
@property NSString * _Nullable relativeUrl;
@property (readonly) NSDictionary<NSString *, id> * _Nullable data;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AFKNMediaBModel.Companion")))
@interface MainAFKNMediaBModelCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (NSMutableArray<MainAFKNMediaBModel *> *)parseMediaListDataList:(NSMutableArray<NSDictionary<NSString *, id> *> *)dataList __attribute__((swift_name("parseMediaList(dataList:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AFKNShareBModel")))
@interface MainAFKNShareBModel : KotlinBase
- (instancetype)initWithData:(NSDictionary<NSString *, id> * _Nullable)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
@property NSString * _Nullable title;
@property NSString * _Nullable content;
@property NSString * _Nullable otherContent;
@property (readonly) NSDictionary<NSString *, id> * _Nullable data;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AFKNSpecialityBModel")))
@interface MainAFKNSpecialityBModel : KotlinBase
- (instancetype)initWithData:(NSDictionary<NSString *, id> * _Nullable)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
@property MainInt * _Nullable specialityId;
@property NSString * _Nullable specialityName;
@property NSString * _Nullable logo;
@property MainInt * _Nullable videoCount;
@property (readonly) NSDictionary<NSString *, id> * _Nullable data;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DCBannerBModel")))
@interface MainDCBannerBModel : KotlinBase
- (instancetype)initWithData:(NSDictionary<NSString *, id> * _Nullable)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
@property int32_t fextraId;
@property NSString *title;
@property NSString * _Nullable content;
@property NSString *fileType;
@property NSString *fileUrl;
@property int64_t dateOfCreation;
@property int64_t dateOfUpdation;
@property NSString *classification;
@property int32_t targetId;
@property NSString * _Nullable target_url;
@property NSString *type;
@property MainInt * _Nullable typeId;
@property MainInt * _Nullable position;
@property MainInt * _Nullable pageNo;
@property (readonly) NSDictionary<NSString *, id> * _Nullable data;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DCKNDeviceInfo")))
@interface MainDCKNDeviceInfo : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable apiVersion;
@property NSString * _Nullable appVersion;
@property NSString * _Nullable deviceType;
@property NSString * _Nullable udid;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DCKNUrls")))
@interface MainDCKNUrls : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable baseUrl;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DCKNUserInfo")))
@interface MainDCKNUserInfo : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable lang;
@property NSString * _Nullable authorization;
@property NSString * _Nullable userAuthKey;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DCSpeakerBModel")))
@interface MainDCSpeakerBModel : KotlinBase
- (instancetype)initWithData:(NSDictionary<NSString *, id> * _Nullable)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
@property MainInt * _Nullable id;
@property NSString * _Nullable name;
@property NSString * _Nullable photo;
@property NSString * _Nullable synopsis;
@property (readonly) NSDictionary<NSString *, id> * _Nullable data;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DCSpeakerBModel.Companion")))
@interface MainDCSpeakerBModelCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (NSMutableArray<MainDCSpeakerBModel *> *)parseSpeakerListDataList:(NSMutableArray<NSDictionary<NSString *, id> *> *)dataList __attribute__((swift_name("parseSpeakerList(dataList:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DKChatBot")))
@interface MainDKChatBot : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)getAgentListCompletionHandler:(MainInt *(^)(MainDKChatAgent *))completionHandler __attribute__((swift_name("getAgentList(completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DKChatAgent")))
@interface MainDKChatAgent : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *name;
@property (readonly) NSString *id;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DKDTSeries")))
@interface MainDKDTSeries : KotlinBase
- (instancetype)initWithJsonDict:(NSDictionary<NSString *, id> *)jsonDict __attribute__((swift_name("init(jsonDict:)"))) __attribute__((objc_designated_initializer));
@property int32_t id;
@property NSString *title;
@property (getter=description_) NSString *description;
@property NSString *banner;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DKLocation")))
@interface MainDKLocation : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DKLocation.Companion")))
@interface MainDKLocationCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (void)getAddressForCordinatesCordinates:(MainDKLCordinates *)cordinates complition:(MainInt *(^)(MainDKLAddress *))complition __attribute__((swift_name("getAddressForCordinates(cordinates:complition:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DKLCordinates")))
@interface MainDKLCordinates : KotlinBase
- (instancetype)initWithLatitude:(double)latitude longitude:(double)longitude __attribute__((swift_name("init(latitude:longitude:)"))) __attribute__((objc_designated_initializer));
@property double latitude;
@property double logitude;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DKLAddress")))
@interface MainDKLAddress : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithData:(MainMutableDictionary<id, id> *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
@property NSString *country;
@property NSString *city;
@property NSString *state;
@property NSString *postalCode;
@property NSString *fullAddress;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DcDocCategoryBModel")))
@interface MainDcDocCategoryBModel : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)getListBlock:(MainInt *(^)(NSMutableArray<MainDcDocCategoryBModel *> *))block __attribute__((swift_name("getList(block:)")));
@property NSString * _Nullable categoryTitle;
@property MainInt * _Nullable categoryId;
@property NSMutableArray<id> * _Nullable dataList;
@property NSString * _Nullable categoryType;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SampleKt")))
@interface MainSampleKt : KotlinBase
+ (NSString *)hello __attribute__((swift_name("hello()")));
+ (void)mainArgs:(MainKotlinArray *)args __attribute__((swift_name("main(args:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface MainKtor_httpHttpMethod : KotlinBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (MainKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
@property (readonly) NSString *value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface MainKotlinUnit : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface MainKotlinArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size init:(id _Nullable (^)(MainInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (id _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<MainKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(id _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size;
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol MainKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

NS_ASSUME_NONNULL_END
