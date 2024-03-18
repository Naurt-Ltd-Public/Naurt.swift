#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.10 (swiftlang-5.10.0.13 clang-1500.3.9.4)
#ifndef NAURTSDK_SWIFT_H
#define NAURTSDK_SWIFT_H
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
@import CoreLocation;
@import Foundation;
@import ObjectiveC;
#endif

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
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="NaurtSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)

/// Wrapper for <code>SpatialAnomaly</code> and <code>TemporalAnomaly</code>
/// Both <code>temporalAnomaly</code> and <code>spatialAnomaly</code> are optional, but if <code>anomalyAlert</code> of the <code>NaurtDelegate</code> is called at least one
/// is guaranteed to be present
SWIFT_CLASS("_TtC8NaurtSDK12AnomalyAlert")
@interface AnomalyAlert : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC8NaurtSDK8Geofence")
@interface Geofence : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, GeofenceActivityType, open) {
  GeofenceActivityTypeEnter = 0,
  GeofenceActivityTypeLeave = 1,
};

@class Location2D;

/// Util class wrapper for generic geodesic functions
SWIFT_CLASS("_TtC8NaurtSDK6Karney")
@interface Karney : NSObject
/// Used to calculate the distance between two arbitrary locations
/// Uses Karney algorithm, fast and accurate. Outputs in metres
- (double)distanceBetween:(Location2D * _Nonnull)a :(Location2D * _Nonnull)b SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8NaurtSDK10Location2D")
@interface Location2D : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC8NaurtSDK15MotionContainer")
@interface MotionContainer : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

/// Enum of the current movement type detected by Naurt
/// Options are <code>Unknown</code>, <code>Walking</code>, <code>Vehicle</code> (any vehicle) or <code>Stationary</code> (vehicle or walking)
typedef SWIFT_ENUM(NSInteger, Movement, open) {
  MovementUnknown = 0,
  MovementWalking = 1,
  MovementVehicle = 2,
  MovementStationary = 3,
};

@class NaurtLocation;
@class NSDictionary;
@class NSString;

SWIFT_PROTOCOL("_TtP8NaurtSDK13NaurtDelegate_")
@protocol NaurtDelegate
/// Primary way in which Naurt communicates location data to you
/// <code>NaurtLocationManager</code>
- (void)didUpdateLocation:(NaurtLocation * _Nonnull)naurtPoint;
- (void)onAppClose;
@optional
- (void)didChangeValidated:(BOOL)isValidated;
- (void)didInteractWithGeofence:(NSDictionary * _Nonnull)events;
- (void)anomalyAlert:(AnomalyAlert * _Nonnull)alert;
- (void)errorStream:(NSString * _Nonnull)errorInformation;
- (void)didChangeAuthorisationStatus:(CLAuthorizationStatus)status;
- (void)didChangeAccuracyAuthorisation:(CLAccuracyAuthorization)status;
@end


/// Primary way in which Naurt communicates location information to you
SWIFT_CLASS("_TtC8NaurtSDK13NaurtLocation")
@interface NaurtLocation : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class NSNumber;

/// The core Naurt object. Only create a single instance of this class.
/// This class will be your main point of contact with Naurt. Upon instantiation, your Naurt API key will be validated and data collection will begin.
SWIFT_CLASS("_TtC8NaurtSDK20NaurtLocationManager")
@interface NaurtLocationManager : NSObject
/// You <em>must</em> set a delegate in order to work with the <code>NaurtLocationManager</code>
/// Usage:
/// \code
/// class YourClass: Naurt {
///  var naurt: NaurtLocationManager;
///
///     init() {
///         self.naurt = NaurtLocationManager(apiKey: "<YOUR KEY HERE>");
///
///         self.naurt.delegate = self
///     }
/// }
///
/// \endcode
@property (nonatomic, strong) id <NaurtDelegate> _Nullable delegate;
/// Use this to create the <code>NaurtLocationManager</code> - make sure to pass your valid Naurt API key in!
/// <code>metadata</code> here acts like an initial call of <code>newDestination</code> for if you want to create <code>NaurtLocationManager</code> with a destination in mind
/// <code>timeAnomaly</code> and <code>distanceAnomaly</code> configure how large the anomaly has to be before it’s reported by
/// <code>anomalyAlert</code> of the <code>NaurtDelegate</code>
- (nonnull instancetype)initWithApiKey:(NSString * _Nonnull)apiKey addressString:(NSString * _Nullable)addressString metadata:(NSDictionary * _Nullable)metadata timeAnomaly:(double)timeAnomaly distanceAnomaly:(double)distanceAnomaly OBJC_DESIGNATED_INITIALIZER;
/// Used to update the Geofences that Naurt is listening to
/// Send in a list of <code>Geofence</code> object. Use an empty list to turn the
/// geofence system off
/// Does nothing if Naurt is killed. Does nothing if your API key has not been validated
- (void)updateGeofencesWithGeo:(NSArray<Geofence *> * _Nonnull)geo;
/// Used to inform Naurt of a new destination
/// The alternative version of this function which takes an <code>AddressJson</code> is
/// STRONGLY advised. Only use this version if you require the use of the @objc
/// Place the expected destination address as a string. Try to be consistend and use the standard address format,
/// going from more specific to more general. For example
/// “Blackfriars, 179 Queen Victoria St, London, EC4V 4DY”
/// Do not include any personal information in the metadata, as it break’s
/// Naurt’s terms of service - for instance, names, email address or phone
/// numbers.
/// You must use this method for Naurt to generate parking spot information
- (void)newDestinationWithAddressString:(NSString * _Nullable)addressString metadata:(NSDictionary * _Nullable)metadata;
- (void)onAppClose;
/// Returns <code>true</code> if your API key has been validated
/// If your key is not validated most of <code>NaurtLocationManager</code> features are disabled.
/// However, you will still receive location updates from the <code>CLLocationManager</code>
- (BOOL)getIsValidated SWIFT_WARN_UNUSED_RESULT;
/// <em>Not recommended</em>
/// Gets the current location. You should be using the delegate method instead
/// Only use for debug purposes
/// If returns <code>nil</code> then <code>NaurtLocationManager</code> is in the <code>blocked</code> state
- (NaurtLocation * _Nullable)getNaurtLocation SWIFT_WARN_UNUSED_RESULT;
/// Gets the Naurt assigned journey ID
- (NSString * _Nonnull)getJourneyUUID SWIFT_WARN_UNUSED_RESULT;
/// Gets the Naurt assigned device UUID
- (NSString * _Nonnull)getDeviceUUID SWIFT_WARN_UNUSED_RESULT;
/// Gets the current app location <code>CLAuthorizationStatus</code>
/// This must return <code>.alwaysAuthorized</code> or <code>.whenInUseAuthorized</code> or the app will
/// not get any location information. Use <code>NaurtLocationManager.requestWhenInUseAuthorization()</code>
/// or <code>NaurtLocationManager.requestAlwaysAuthorization()</code> in order to get location permissions
/// If you require background tracking, this must return <code>.alwaysAuthorized</code>. You must request that
/// with <code>NaurtLocationManager.requestAlwaysAuthorization()</code>
/// If this returns <code>.restricted</code> or <code>.denied</code> then <code>NaurtLocationManager</code> enters the <code>blocked</code> state
/// and all features are disabled. You can check that with <code>NaurtLocationManager.getIsBlocked()</code>
- (CLAuthorizationStatus)getAuthorisationStatus SWIFT_WARN_UNUSED_RESULT;
/// Get the current app <code>CLAccuracyAuthorization</code>
/// Ideally, this would return <code>.fullAccuracy</code>. If it does, Naurt is functioning at peak capacity.
/// If this returns <code>.reducedAccuracy</code> the user is limiting the accuracy of location data the app can access.
/// You might consider suggesting they enable better accuracy authorisation in the settings
- (CLAccuracyAuthorization)getAccuracyAuthorisation SWIFT_WARN_UNUSED_RESULT;
/// Get if Naurt has been <code>blocked</code> by the user due to location permissions
/// If <code>CLAccuracyAuthorization</code> is <code>.denied</code> or <code>.restricted</code> then Naurt enters the <code>blocked</code> state and all
/// features are disabled, to respect user privacy choices
/// If the user grants the app location access Naurt will automatically leave the <code>blocked</code> state and continue normal operation
- (BOOL)getIsBlocked SWIFT_WARN_UNUSED_RESULT;
/// Distance between the current location and the location you specify in <code>Location2D</code>
/// Uses the Karney method, highly efficient and accurate. Returns in metres.
/// If <code>nil</code> then Naurt is in the <code>blocked</code> state
- (NSNumber * _Nullable)distanceBetween:(Location2D * _Nonnull)a SWIFT_WARN_UNUSED_RESULT;
/// Set the frequency with which Naurt outputs
/// Units are in seconds. Default is nil - Naurt will output as often as possible, usually around 1 second
/// Frequency setting is more of a suggestion than a timer
- (void)setEmissionFrequencyWithFrequency:(NSNumber * _Nullable)frequency;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// Use this class to make requests to the Naurt POI API
SWIFT_CLASS("_TtC8NaurtSDK10POIManager")
@interface POIManager : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, PoiError, open) {
  PoiErrorInvalidJson = 0,
  PoiErrorMaxRetries = 1,
  PoiErrorUnknown = 2,
};
static NSString * _Nonnull const PoiErrorDomain = @"NaurtSDK.PoiError";

/// Enum showing how the current <code>NaurtLocation</code> was calculated
/// <ul>
///   <li>
///     <code>NaurtFull</code> means both GNSS and sensor fusion was used. Best possible accuracy
///   </li>
///   <li>
///     <code>NaurtSensor</code> means only sensors were used e.g. the user is indoors and has no GNSS signals. Expect rapidly degrating location quality
///   </li>
///   <li>
///     <code>Gnss</code> means only GNSS was used, and Naurt did not apply any improvements. This is used when your API key is not validated
///   </li>
/// </ul>
typedef SWIFT_ENUM(NSInteger, Source, open) {
  SourceNaurtFull = 0,
  SourceNaurtSensor = 1,
  SourceGnss = 2,
};


/// Used to represent a spatial anomaly event
/// Spatial anomaly events are when the location suddenly changes by large distances.
/// This could indicate tampering with the location services, or other issues around background processing
/// You can configure how much distance has to be covered before a spatial anomaly event is flagged by setting <code>distanceAnomaly</code> in the
/// <code>NaurtLocationManager</code>. Default is 10 metres
SWIFT_CLASS("_TtC8NaurtSDK14SpatialAnomaly")
@interface SpatialAnomaly : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// Used to represent a time anomaly event
/// Time anomaly events are when significant unexpected amounts of time pass between location fixes.
/// This could indicate tampering with the location services, or other issues around background processing
/// You can configure how long has to pass before a time anomaly event is flagged by setting <code>timeAnomaly</code> in the <code>NaurtLocationManager</code>
/// initialiser. Default is 10 seconds
SWIFT_CLASS("_TtC8NaurtSDK15TemporalAnomaly")
@interface TemporalAnomaly : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
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
