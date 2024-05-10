#if 0
#elif defined(__x86_64__) && __x86_64__
// Generated by Apple Swift version 5.9 (swiftlang-5.9.0.128.108 clang-1500.0.40.1)
#ifndef ONEGINISDKIOS_SWIFT_H
#define ONEGINISDKIOS_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#include <cstring>
#include <stdlib.h>
#include <new>
#include <type_traits>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#endif
#if defined(__cplusplus)
#if defined(__arm64e__) && __has_include(<ptrauth.h>)
# include <ptrauth.h>
#else
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-macro-identifier"
# ifndef __ptrauth_swift_value_witness_function_pointer
#  define __ptrauth_swift_value_witness_function_pointer(x)
# endif
# ifndef __ptrauth_swift_class_method_pointer
#  define __ptrauth_swift_class_method_pointer(x)
# endif
#pragma clang diagnostic pop
#endif
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...) 
# endif
#endif
#if !defined(SWIFT_RUNTIME_NAME)
# if __has_attribute(objc_runtime_name)
#  define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
# else
#  define SWIFT_RUNTIME_NAME(X) 
# endif
#endif
#if !defined(SWIFT_COMPILE_NAME)
# if __has_attribute(swift_name)
#  define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
# else
#  define SWIFT_COMPILE_NAME(X) 
# endif
#endif
#if !defined(SWIFT_METHOD_FAMILY)
# if __has_attribute(objc_method_family)
#  define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
# else
#  define SWIFT_METHOD_FAMILY(X) 
# endif
#endif
#if !defined(SWIFT_NOESCAPE)
# if __has_attribute(noescape)
#  define SWIFT_NOESCAPE __attribute__((noescape))
# else
#  define SWIFT_NOESCAPE 
# endif
#endif
#if !defined(SWIFT_RELEASES_ARGUMENT)
# if __has_attribute(ns_consumed)
#  define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
# else
#  define SWIFT_RELEASES_ARGUMENT 
# endif
#endif
#if !defined(SWIFT_WARN_UNUSED_RESULT)
# if __has_attribute(warn_unused_result)
#  define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
# else
#  define SWIFT_WARN_UNUSED_RESULT 
# endif
#endif
#if !defined(SWIFT_NORETURN)
# if __has_attribute(noreturn)
#  define SWIFT_NORETURN __attribute__((noreturn))
# else
#  define SWIFT_NORETURN 
# endif
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA 
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA 
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA 
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif
#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif
#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER 
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility) 
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED_OBJC)
# if __has_feature(attribute_diagnose_if_objc)
#  define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
# else
#  define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
# endif
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction 
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if !defined(SWIFT_INDIRECT_RESULT)
# define SWIFT_INDIRECT_RESULT __attribute__((swift_indirect_result))
#endif
#if !defined(SWIFT_CONTEXT)
# define SWIFT_CONTEXT __attribute__((swift_context))
#endif
#if !defined(SWIFT_ERROR_RESULT)
# define SWIFT_ERROR_RESULT __attribute__((swift_error_result))
#endif
#if defined(__cplusplus)
# define SWIFT_NOEXCEPT noexcept
#else
# define SWIFT_NOEXCEPT 
#endif
#if !defined(SWIFT_C_INLINE_THUNK)
# if __has_attribute(always_inline)
# if __has_attribute(nodebug)
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline)) __attribute__((nodebug))
# else
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline))
# endif
# else
#  define SWIFT_C_INLINE_THUNK inline
# endif
#endif
#if defined(_WIN32)
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL __declspec(dllimport)
#endif
#else
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL 
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import AuthenticationServices;
@import Foundation;
@import ObjectiveC;
@import Security;
#endif

#import <OneginiSDKiOS/OneginiSDKiOS.h>

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="OneginiSDKiOS",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)
@class ONGURLSessionModel;
@class ONGOAuthSessionModel;
@class ONGRequestSerializerModel;
@class ONGMobileAuthenticationActionDTO;
@class NSString;

SWIFT_CLASS("_TtC13OneginiSDKiOS30AnswerMobileAuthNetworkService")
@interface AnswerMobileAuthNetworkService : NSObject
@property (nonatomic, strong) ONGURLSessionModel * _Nullable urlSessionModel;
@property (nonatomic, strong) ONGOAuthSessionModel * _Nullable oAuthSessionModel;
@property (nonatomic, strong) ONGRequestSerializerModel * _Nullable requestSerializerModel;
- (void)answerMobileAuthenticationAction:(ONGMobileAuthenticationActionDTO * _Nonnull)mobileAuthenticationAction answer:(NSString * _Nonnull)answer completion:(void (^ _Nonnull)(BOOL, NSError * _Nullable))completion;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSURL;

SWIFT_CLASS("_TtC13OneginiSDKiOS34AppToWebSingleSignOnNetworkService")
@interface AppToWebSingleSignOnNetworkService : NSObject
@property (nonatomic, strong) ONGURLSessionModel * _Nullable urlSessionModel;
@property (nonatomic, strong) ONGOAuthSessionModel * _Nullable oAuthSessionModel;
@property (nonatomic, strong) ONGRequestSerializerModel * _Nullable requestSerializerModel;
- (void)sendCreateLoginTokenRequestWithTargetURL:(NSURL * _Nonnull)targetURL completion:(void (^ _Nonnull)(NSURL * _Nullable, NSString * _Nullable, NSError * _Nullable))completion;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@protocol ASAuthorizationControllerDelegate;
@class ASAuthorizationController;

SWIFT_CLASS("_TtC13OneginiSDKiOS37AppleIdAuthorizationControllerFactory")
@interface AppleIdAuthorizationControllerFactory : NSObject <AppleIdAuthorizationControllerFactoryProtocol>
- (ASAuthorizationController * _Nonnull)authorizationControllerWithDelegate:(id <ASAuthorizationControllerDelegate> _Nonnull)delegate SWIFT_WARN_UNUSED_RESULT SWIFT_AVAILABILITY(ios,introduced=13.0);
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC13OneginiSDKiOS14AppleIdService")
@interface AppleIdService : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@class ASAuthorization;

SWIFT_AVAILABILITY(ios,introduced=13.0)
@interface AppleIdService (SWIFT_EXTENSION(OneginiSDKiOS)) <ASAuthorizationControllerDelegate>
- (void)authorizationController:(ASAuthorizationController * _Nonnull)controller didCompleteWithAuthorization:(ASAuthorization * _Nonnull)authorization;
- (void)authorizationController:(ASAuthorizationController * _Nonnull)controller didCompleteWithError:(NSError * _Nonnull)error;
@end

@protocol JSONWebTokenServiceProtocol;

SWIFT_CLASS("_TtC13OneginiSDKiOS22ClientAssertionService")
@interface ClientAssertionService : NSObject <ClientAssertionServiceProtocol>
@property (nonatomic, strong) ONGOAuthSessionModel * _Nullable oAuthSessionModel;
@property (nonatomic, strong) id <JSONWebTokenServiceProtocol> _Nullable jsonWebTokenService;
- (NSString * _Nullable)generateClientAssertionJWTWithClientId:(NSString * _Nonnull)clientId privateKey:(SecKeyRef _Nonnull)privateKey uuid:(NSString * _Nonnull)uuid error:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@protocol JSONWebKeySetServiceProtocol;
@protocol NetworkParamsHelperProtocol;
@class ONGClientCredentials;
@class ONGClientChallengeResponse;

SWIFT_CLASS("_TtC13OneginiSDKiOS29ClientMigrationNetworkService")
@interface ClientMigrationNetworkService : NSObject
@property (nonatomic, strong) ONGURLSessionModel * _Nullable urlSessionModel;
@property (nonatomic, strong) ONGOAuthSessionModel * _Nullable oAuthSessionModel;
@property (nonatomic, strong) ONGRequestSerializerModel * _Nullable requestSerializerModel;
@property (nonatomic, strong) id <JSONWebKeySetServiceProtocol> _Nullable jsonWebKeySetService;
@property (nonatomic, strong) id <JSONWebTokenServiceProtocol> _Nullable jsonWebTokenService;
@property (nonatomic, strong) id <NetworkParamsHelperProtocol> _Nullable networkParamsHelper;
- (void)requestMigrationChallengeWithClientCredentials:(ONGClientCredentials * _Nonnull)clientCredentials completion:(void (^ _Nonnull)(ONGClientChallengeResponse * _Nullable, NSError * _Nullable))completion;
- (void)requestMigrationResponseWithClientCredentials:(ONGClientCredentials * _Nonnull)clientCredentials publicKey:(SecKeyRef _Nonnull)publicKey privateKey:(SecKeyRef _Nonnull)privateKey challengeSignature:(NSString * _Nonnull)challengeSignature completion:(void (^ _Nonnull)(NSString * _Nullable, NSError * _Nullable))completion;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC13OneginiSDKiOS32ClientRegistrationNetworkService")
@interface ClientRegistrationNetworkService : NSObject
@property (nonatomic, strong) ONGURLSessionModel * _Nullable urlSessionModel;
@property (nonatomic, strong) ONGOAuthSessionModel * _Nullable oAuthSessionModel;
@property (nonatomic, strong) ONGRequestSerializerModel * _Nullable requestSerializerModel;
@property (nonatomic, strong) id <JSONWebKeySetServiceProtocol> _Nullable jsonWebKeySetService;
@property (nonatomic, strong) id <JSONWebTokenServiceProtocol> _Nullable jsonWebTokenService;
@property (nonatomic, strong) id <NetworkParamsHelperProtocol> _Nullable networkParamsHelper;
- (void)requestClientChallengeWith:(NSString * _Nonnull)uuid completion:(void (^ _Nonnull)(ONGClientChallengeResponse * _Nullable, NSError * _Nullable))completion;
- (void)requestRegistrationResponseWith:(NSString * _Nonnull)uuid publicKey:(SecKeyRef _Nonnull)publicKey privateKey:(SecKeyRef _Nonnull)privateKey challengeSignature:(NSString * _Nonnull)challengeSignature completion:(void (^ _Nonnull)(NSString * _Nullable, NSError * _Nullable))completion;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class ONGConfigModel;
enum ServerFunction : NSInteger;

SWIFT_CLASS("_TtC13OneginiSDKiOS16CompatibilityMap")
@interface CompatibilityMap : NSObject
- (nonnull instancetype)initWithOngConfigModel:(ONGConfigModel * _Nonnull)ongConfigModel OBJC_DESIGNATED_INITIALIZER;
/// Method checks whether the server is compatibile with provided function
/// \param function a function on the server
///
///
/// returns:
/// if server is compatibile with that function
- (BOOL)isServerCompatibileWith:(enum ServerFunction)function SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


@class ONGAuthenticator;

SWIFT_CLASS("_TtC13OneginiSDKiOS38CustomAuthDeregistrationNetworkService")
@interface CustomAuthDeregistrationNetworkService : NSObject
@property (nonatomic, strong) ONGURLSessionModel * _Nullable urlSessionModel;
@property (nonatomic, strong) ONGOAuthSessionModel * _Nullable oAuthSessionModel;
@property (nonatomic, strong) ONGRequestSerializerModel * _Nullable requestSerializerModel;
- (void)deregisterCustomAuthenticator:(ONGAuthenticator * _Nonnull)authenticator accessToken:(NSString * _Nonnull)accessToken completion:(void (^ _Nonnull)(BOOL, NSError * _Nullable))completion;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class ONGUserProfile;
@class ONGCustomInfo;

SWIFT_CLASS("_TtC13OneginiSDKiOS44CustomAuthFinishAuthenticationNetworkService")
@interface CustomAuthFinishAuthenticationNetworkService : NSObject
@property (nonatomic, strong) ONGURLSessionModel * _Nullable urlSessionModel;
@property (nonatomic, strong) ONGOAuthSessionModel * _Nullable oAuthSessionModel;
@property (nonatomic, strong) ONGRequestSerializerModel * _Nullable requestSerializerModel;
@property (nonatomic, strong) id <ClientAssertionServiceProtocol> _Nullable clientAssertionService;
- (void)authenticateUser:(ONGUserProfile * _Nonnull)userProfile authenticator:(ONGAuthenticator * _Nonnull)authenticator data:(NSString * _Nonnull)data clientId:(NSString * _Nonnull)clientId privateKey:(SecKeyRef _Nonnull)privateKey uuid:(NSString * _Nonnull)uuid transactionId:(NSString * _Nullable)transactionId completion:(void (^ _Nonnull)(NSString * _Nullable, ONGCustomInfo * _Nullable, NSError * _Nullable))completion;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC13OneginiSDKiOS42CustomAuthFinishRegistrationNetworkService")
@interface CustomAuthFinishRegistrationNetworkService : NSObject
@property (nonatomic, strong) ONGURLSessionModel * _Nullable urlSessionModel;
@property (nonatomic, strong) ONGOAuthSessionModel * _Nullable oAuthSessionModel;
@property (nonatomic, strong) ONGRequestSerializerModel * _Nullable requestSerializerModel;
- (void)registerCustomAuthenticator:(ONGAuthenticator * _Nonnull)authenticator data:(NSString * _Nullable)data accessToken:(NSString * _Nonnull)accessToken completion:(void (^ _Nonnull)(ONGCustomInfo * _Nullable, NSError * _Nullable))completion;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class ONGIdentityProvider;
@class ONGSessionTokens;

SWIFT_CLASS("_TtC13OneginiSDKiOS32CustomRegistrationNetworkService")
@interface CustomRegistrationNetworkService : NSObject
@property (nonatomic, strong) ONGURLSessionModel * _Nullable urlSessionModel;
@property (nonatomic, strong) ONGOAuthSessionModel * _Nullable oAuthSessionModel;
@property (nonatomic, strong) ONGRequestSerializerModel * _Nullable requestSerializerModel;
@property (nonatomic, strong) id <ClientAssertionServiceProtocol> _Nullable clientAssertionService;
- (void)sendCustomRegistrationInitRequestWithIdentityProvider:(ONGIdentityProvider * _Nonnull)identityProvider data:(NSString * _Nullable)data clientId:(NSString * _Nonnull)clientId privateKey:(SecKeyRef _Nonnull)privateKey uuid:(NSString * _Nonnull)uuid completion:(void (^ _Nonnull)(NSString * _Nullable, ONGCustomInfo * _Nullable, NSError * _Nullable))completion;
- (void)sendCustomRegistrationFinishRequestWithIdentityProvider:(ONGIdentityProvider * _Nonnull)identityProvider scopes:(NSArray<NSString *> * _Nullable)scopes profileId:(NSString * _Nonnull)profileId isStatelessUser:(BOOL)isStatelessUser data:(NSString * _Nullable)data transactionId:(NSString * _Nullable)transactionId clientId:(NSString * _Nonnull)clientId privateKey:(SecKeyRef _Nonnull)privateKey uuid:(NSString * _Nonnull)uuid completion:(void (^ _Nonnull)(ONGSessionTokens * _Nullable, ONGCustomInfo * _Nullable, NSError * _Nullable))completion;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSData;

SWIFT_CLASS("_TtC13OneginiSDKiOS27DeveloperCertificateService")
@interface DeveloperCertificateService : NSObject
@property (nonatomic, strong) ONGOAuthSessionModel * _Nullable oAuthSessionModel;
- (NSData * _Nullable)developerCertificateFor:(ONGIntegrityType)integrityType error:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC13OneginiSDKiOS13ErrorResponse")
@interface ErrorResponse : NSObject
@property (nonatomic, readonly, copy) NSString * _Nullable error;
@end


SWIFT_CLASS("_TtC13OneginiSDKiOS23FetchDataNetworkService")
@interface FetchDataNetworkService : NSObject
@property (nonatomic, strong) ONGURLSessionModel * _Nullable urlSessionModel;
@property (nonatomic, strong) ONGOAuthSessionModel * _Nullable oAuthSessionModel;
@property (nonatomic, strong) ONGRequestSerializerModel * _Nullable requestSerializerModel;
- (void)fetchMobileAuthPayloadWithTransactionId:(NSString * _Nonnull)transactionId clientId:(NSString * _Nonnull)clientId profileId:(NSString * _Nullable)profileId completion:(void (^ _Nonnull)(NSString * _Nullable, NSError * _Nullable))completion;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC13OneginiSDKiOS21GenerateRandomService")
@interface GenerateRandomService : NSObject
+ (NSInteger)generateRandomNumberIn:(NSInteger)range offset:(NSInteger)offset SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nullable)generateRandomLowercaseStringWithLength:(NSInteger)length SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



SWIFT_CLASS("_TtC13OneginiSDKiOS20JSONWebKeySetService")
@interface JSONWebKeySetService : NSObject <JSONWebKeySetServiceProtocol>
- (NSDictionary * _Nullable)generateJWKSWithEcPublicKey:(SecKeyRef _Nullable)publicKey error:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC13OneginiSDKiOS19JSONWebTokenService")
@interface JSONWebTokenService : NSObject <JSONWebTokenServiceProtocol>
- (NSString * _Nullable)generateJWTWithPayload:(NSDictionary<NSString *, id> * _Nonnull)payload privateKey:(SecKeyRef _Nonnull)privateKey error:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC13OneginiSDKiOS19NetworkParamsHelper")
@interface NetworkParamsHelper : NSObject <NetworkParamsHelperProtocol>
@property (nonatomic, strong) ONGConfigModel * _Nullable configModel;
- (NSDictionary * _Nonnull)paramsWith:(NSString * _Nonnull)redirectURL jwks:(NSDictionary * _Nonnull)jwks softwareStatementJWT:(NSString * _Nonnull)softwareStatementJWT SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class ONGPublicKey;

SWIFT_CLASS("_TtC13OneginiSDKiOS28PGPKeyExchangeNetworkService")
@interface PGPKeyExchangeNetworkService : NSObject
@property (nonatomic, strong) ONGURLSessionModel * _Nullable urlSessionModel;
@property (nonatomic, strong) ONGOAuthSessionModel * _Nullable oAuthSessionModel;
@property (nonatomic, strong) ONGRequestSerializerModel * _Nullable requestSerializerModel;
- (void)requestServerPublicKeyWithAccessToken:(NSString * _Nonnull)accessToken clientPublicKey:(NSString * _Nonnull)clientPublicKey completion:(void (^ _Nonnull)(ONGPublicKey * _Nullable, NSError * _Nullable))completion;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class ONGHandshakeResponse;

SWIFT_CLASS("_TtC13OneginiSDKiOS33PayloadEncryptionNetworkServiceV2")
@interface PayloadEncryptionNetworkServiceV2 : NSObject
@property (nonatomic, strong) ONGURLSessionModel * _Nullable urlSessionModel;
@property (nonatomic, strong) ONGOAuthSessionModel * _Nullable oAuthSessionModel;
@property (nonatomic, strong) ONGRequestSerializerModel * _Nullable requestSerializerModel;
@property (nonatomic, strong) id <ClientAssertionServiceProtocol> _Nullable clientAssertionService;
- (void)performHandshakeWithPublicKey:(NSString * _Nonnull)publicKey signature:(NSString * _Nonnull)signature clientId:(NSString * _Nonnull)clientId privateKey:(SecKeyRef _Nonnull)privateKey uuid:(NSString * _Nonnull)uuid completion:(void (^ _Nonnull)(NSString * _Nullable, ONGHandshakeResponse * _Nullable, NSError * _Nullable))completion;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class ONGPendingMobileAuthRequest;

SWIFT_CLASS("_TtC13OneginiSDKiOS39PendingMobileAuthRequestsNetworkService")
@interface PendingMobileAuthRequestsNetworkService : NSObject
@property (nonatomic, strong) ONGURLSessionModel * _Nullable urlSessionModel;
@property (nonatomic, strong) ONGOAuthSessionModel * _Nullable oAuthSessionModel;
@property (nonatomic, strong) ONGRequestSerializerModel * _Nullable requestSerializerModel;
@property (nonatomic, strong) id <ClientAssertionServiceProtocol> _Nullable clientAssertionService;
- (void)fetchPendingPushMobileAuthRequestsWithClientId:(NSString * _Nonnull)clientId privateKey:(SecKeyRef _Nonnull)privateKey uuid:(NSString * _Nonnull)uuid completion:(void (^ _Nonnull)(NSArray<ONGPendingMobileAuthRequest *> * _Nullable, NSError * _Nullable))completion;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC13OneginiSDKiOS19ProtectedDataHelper")
@interface ProtectedDataHelper : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) BOOL isProtectedDataAvailable SWIFT_AVAILABILITY(ios_app_extension,unavailable);)
+ (BOOL)isProtectedDataAvailable SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC13OneginiSDKiOS28PushEnrollmentNetworkService")
@interface PushEnrollmentNetworkService : NSObject
@property (nonatomic, strong) ONGURLSessionModel * _Nullable urlSessionModel;
@property (nonatomic, strong) ONGOAuthSessionModel * _Nullable oAuthSessionModel;
@property (nonatomic, strong) ONGRequestSerializerModel * _Nullable requestSerializerModel;
- (void)enrollForPushWithAccessToken:(NSString * _Nonnull)accessToken deviceToken:(NSString * _Nonnull)deviceToken completion:(void (^ _Nonnull)(BOOL, NSError * _Nullable))completion;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC13OneginiSDKiOS19PushUserInfoDecoder")
@interface PushUserInfoDecoder : NSObject
+ (ONGUserProfile * _Nullable)decodeUserProfileFromUserInfo:(NSDictionary<NSString *, id> * _Nonnull)userInfo SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nullable)decodeTransactionIDFromUserInfo:(NSDictionary<NSString *, id> * _Nonnull)userInfo SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nullable)decodeMessageFromUserInfo:(NSDictionary<NSString *, id> * _Nonnull)userInfo SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)isUserInfoValid:(NSDictionary<NSString *, id> * _Nonnull)userInfo SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC13OneginiSDKiOS26RequestTokenNetworkService")
@interface RequestTokenNetworkService : NSObject <RequestTokenNetworkServiceProtocol>
- (void)requestClientAccessTokenWithScopes:(NSArray<NSString *> * _Nullable)scopes clientId:(NSString * _Nonnull)clientId privateKey:(SecKeyRef _Nonnull)privateKey uuid:(NSString * _Nonnull)uuid completion:(void (^ _Nonnull)(ONGSessionTokens * _Nullable, NSError * _Nullable))completion;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC13OneginiSDKiOS25RevokeTokenNetworkService")
@interface RevokeTokenNetworkService : NSObject <RevokeTokenNetworkServiceProtocol>
@property (nonatomic, strong) ONGURLSessionModel * _Nullable urlSessionModel;
@property (nonatomic, strong) ONGOAuthSessionModel * _Nullable oAuthSessionModel;
@property (nonatomic, strong) ONGRequestSerializerModel * _Nullable requestSerializerModel;
@property (nonatomic, strong) id <ClientAssertionServiceProtocol> _Nullable clientAssertionService;
- (void)revokeToken:(NSString * _Nullable)token clientId:(NSString * _Nonnull)clientId privateKey:(SecKeyRef _Nonnull)privateKey uuid:(NSString * _Nonnull)uuid completion:(void (^ _Nonnull)(BOOL, NSError * _Nullable))completion;
- (void)revokeProfile:(NSString * _Nullable)profileId clientId:(NSString * _Nonnull)clientId privateKey:(SecKeyRef _Nonnull)privateKey uuid:(NSString * _Nonnull)uuid token:(NSString * _Nullable)token tokenType:(NSString * _Nullable)tokenType completion:(void (^ _Nonnull)(BOOL, NSError * _Nullable))completion;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC13OneginiSDKiOS18RevokeTokenService")
@interface RevokeTokenService : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

/// Available dynamic functions of the server
/// To be filled with new functions when needed
typedef SWIFT_ENUM(NSInteger, ServerFunction, open) {
  ServerFunctionStateless = 0,
};


SWIFT_CLASS("_TtC13OneginiSDKiOS27StoreKeyValueNetworkService")
@interface StoreKeyValueNetworkService : NSObject <StoreKeyValueNetworkServiceProtocol>
- (void)storePayload:(NSString * _Nonnull)payload identityProviderId:(NSString * _Nonnull)identityProviderId completion:(void (^ _Nonnull)(NSString * _Nullable, NSError * _Nullable))completion;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class ONGRSACryptor;
@class ONGMobileAuthenticationCryptor;
@class ONGMobileAuthModel;
@class ONGClientIdModel;

SWIFT_CLASS("_TtC13OneginiSDKiOS29SubmitSignatureNetworkService")
@interface SubmitSignatureNetworkService : NSObject
@property (nonatomic, strong) ONGURLSessionModel * _Nullable urlSessionModel;
@property (nonatomic, strong) ONGOAuthSessionModel * _Nullable oAuthSessionModel;
@property (nonatomic, strong) ONGRequestSerializerModel * _Nullable requestSerializerModel;
@property (nonatomic, strong) ONGRSACryptor * _Nullable rsaCryptor;
@property (nonatomic, strong) ONGMobileAuthenticationCryptor * _Nullable mobileAuthenticationCryptor;
@property (nonatomic, strong) ONGMobileAuthModel * _Nullable mobileAuthModel;
@property (nonatomic, strong) ONGClientIdModel * _Nullable clientIdModel;
- (void)submitSignatureWithMobileAuthenticationAction:(ONGMobileAuthenticationActionDTO * _Nonnull)mobileAuthenticationAction completion:(void (^ _Nonnull)(BOOL, NSError * _Nullable))completion;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class ONGClientValidationResponse;

SWIFT_CLASS("_TtC13OneginiSDKiOS28ValidateClientNetworkService")
@interface ValidateClientNetworkService : NSObject
@property (nonatomic, strong) ONGURLSessionModel * _Nullable urlSessionModel;
@property (nonatomic, strong) ONGOAuthSessionModel * _Nullable oAuthSessionModel;
@property (nonatomic, strong) ONGRequestSerializerModel * _Nullable requestSerializerModel;
@property (nonatomic, strong) id <ClientAssertionServiceProtocol> _Nullable clientAssertionService;
@property (nonatomic, strong) id <JSONWebTokenServiceProtocol> _Nullable jsonWebTokenService;
- (void)validateClientRequestWith:(NSString * _Nonnull)clientID uuid:(NSString * _Nonnull)uuid deviceIntegrityReport:(NSDictionary<NSString *, id> * _Nonnull)deviceIntegrityReport privateKey:(SecKeyRef _Nonnull)privateKey completion:(void (^ _Nonnull)(ONGClientValidationResponse * _Nullable, NSError * _Nullable))completion;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#if defined(__cplusplus)
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
