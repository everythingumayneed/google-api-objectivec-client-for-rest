// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Firebase Rules API (firebaserules/v1)
// Description:
//   Creates and manages rules that determine when a Firebase Rules-enabled
//   service should permit a request.
// Documentation:
//   https://firebase.google.com/docs/storage/security

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRFirebaseRules_File;
@class GTLRFirebaseRules_FunctionCall;
@class GTLRFirebaseRules_Issue;
@class GTLRFirebaseRules_Release;
@class GTLRFirebaseRules_Ruleset;
@class GTLRFirebaseRules_Source;
@class GTLRFirebaseRules_SourcePosition;
@class GTLRFirebaseRules_TestResult;

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the classes' properties below.

// ----------------------------------------------------------------------------
// GTLRFirebaseRules_Issue.severity

/**
 *  Deprecation issue for statements and method that may no longer be
 *  supported or maintained.
 *
 *  Value: "DEPRECATION"
 */
GTLR_EXTERN NSString * const kGTLRFirebaseRules_Issue_Severity_Deprecation;
/**
 *  Errors such as: unmatched curly braces or variable redefinition.
 *
 *  Value: "ERROR"
 */
GTLR_EXTERN NSString * const kGTLRFirebaseRules_Issue_Severity_Error;
/**
 *  An unspecified severity.
 *
 *  Value: "SEVERITY_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRFirebaseRules_Issue_Severity_SeverityUnspecified;
/**
 *  Warnings such as: unused variables.
 *
 *  Value: "WARNING"
 */
GTLR_EXTERN NSString * const kGTLRFirebaseRules_Issue_Severity_Warning;

// ----------------------------------------------------------------------------
// GTLRFirebaseRules_TestResult.state

/**
 *  Test is a failure.
 *
 *  Value: "FAILURE"
 */
GTLR_EXTERN NSString * const kGTLRFirebaseRules_TestResult_State_Failure;
/**
 *  Test state is not set.
 *
 *  Value: "STATE_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRFirebaseRules_TestResult_State_StateUnspecified;
/**
 *  Test is a success.
 *
 *  Value: "SUCCESS"
 */
GTLR_EXTERN NSString * const kGTLRFirebaseRules_TestResult_State_Success;

/**
 *  A generic empty message that you can re-use to avoid defining duplicated
 *  empty messages in your APIs. A typical example is to use it as the request
 *  or the response type of an API method. For instance:
 *  service Foo {
 *  rpc Bar(google.protobuf.Empty) returns (google.protobuf.Empty);
 *  }
 *  The JSON representation for `Empty` is empty JSON object `{}`.
 */
@interface GTLRFirebaseRules_Empty : GTLRObject
@end


/**
 *  `File` containing source content.
 */
@interface GTLRFirebaseRules_File : GTLRObject

/** Textual Content. */
@property(nonatomic, copy, nullable) NSString *content;

/**
 *  Fingerprint (e.g. github sha) associated with the `File`.
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, copy, nullable) NSString *fingerprint;

/** File name. */
@property(nonatomic, copy, nullable) NSString *name;

@end


/**
 *  Represents a service-defined function call that was invoked during test
 *  execution.
 */
@interface GTLRFirebaseRules_FunctionCall : GTLRObject

/**
 *  The arguments that were provided to the function.
 *
 *  Can be any valid JSON type.
 */
@property(nonatomic, strong, nullable) NSArray *args;

/** Name of the function invoked. */
@property(nonatomic, copy, nullable) NSString *function;

@end


/**
 *  Issues include warnings, errors, and deprecation notices.
 */
@interface GTLRFirebaseRules_Issue : GTLRObject

/**
 *  Short error description.
 *
 *  Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
 */
@property(nonatomic, copy, nullable) NSString *descriptionProperty;

/**
 *  The severity of the issue.
 *
 *  Likely values:
 *    @arg @c kGTLRFirebaseRules_Issue_Severity_Deprecation Deprecation issue
 *        for statements and method that may no longer be
 *        supported or maintained. (Value: "DEPRECATION")
 *    @arg @c kGTLRFirebaseRules_Issue_Severity_Error Errors such as: unmatched
 *        curly braces or variable redefinition. (Value: "ERROR")
 *    @arg @c kGTLRFirebaseRules_Issue_Severity_SeverityUnspecified An
 *        unspecified severity. (Value: "SEVERITY_UNSPECIFIED")
 *    @arg @c kGTLRFirebaseRules_Issue_Severity_Warning Warnings such as: unused
 *        variables. (Value: "WARNING")
 */
@property(nonatomic, copy, nullable) NSString *severity;

/** Position of the issue in the `Source`. */
@property(nonatomic, strong, nullable) GTLRFirebaseRules_SourcePosition *sourcePosition;

@end


/**
 *  The response for FirebaseRulesService.ListReleases.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "releases" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRFirebaseRules_ListReleasesResponse : GTLRCollectionObject

/**
 *  The pagination token to retrieve the next page of results. If the value is
 *  empty, no further results remain.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/**
 *  List of `Release` instances.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRFirebaseRules_Release *> *releases;

@end


/**
 *  The response for FirebaseRulesService.ListRulesets.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "rulesets" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRFirebaseRules_ListRulesetsResponse : GTLRCollectionObject

/**
 *  The pagination token to retrieve the next page of results. If the value is
 *  empty, no further results remain.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/**
 *  List of `Ruleset` instances.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRFirebaseRules_Ruleset *> *rulesets;

@end


/**
 *  `Release` is a named reference to a `Ruleset`. Once a `Release` refers to a
 *  `Ruleset`, rules-enabled services will be able to enforce the `Ruleset`.
 */
@interface GTLRFirebaseRules_Release : GTLRObject

/**
 *  Time the release was created.
 *  Output only.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *createTime;

/**
 *  Resource name for the `Release`.
 *  `Release` names may be structured `app1/prod/v2` or flat `app1_prod_v2`
 *  which affords developers a great deal of flexibility in mapping the name
 *  to the style that best fits their existing development practices. For
 *  example, a name could refer to an environment, an app, a version, or some
 *  combination of three.
 *  In the table below, for the project name `projects/foo`, the following
 *  relative release paths show how flat and structured names might be chosen
 *  to match a desired development / deployment strategy.
 *  Use Case | Flat Name | Structured Name
 *  -------------|---------------------|----------------
 *  Environments | releases/qa | releases/qa
 *  Apps | releases/app1_qa | releases/app1/qa
 *  Versions | releases/app1_v2_qa | releases/app1/v2/qa
 *  The delimiter between the release name path elements can be almost anything
 *  and it should work equally well with the release name list filter, but in
 *  many ways the structured paths provide a clearer picture of the
 *  relationship between `Release` instances.
 *  Format: `projects/{project_id}/releases/{release_id}`
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Name of the `Ruleset` referred to by this `Release`. The `Ruleset` must
 *  exist the `Release` to be created.
 */
@property(nonatomic, copy, nullable) NSString *rulesetName;

/**
 *  Time the release was updated.
 *  Output only.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *updateTime;

@end


/**
 *  `Ruleset` is an immutable copy of `Source` with a globally unique identifier
 *  and a creation time.
 */
@interface GTLRFirebaseRules_Ruleset : GTLRObject

/**
 *  Time the `Ruleset` was created.
 *  Output only.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *createTime;

/**
 *  Name of the `Ruleset`. The ruleset_id is auto generated by the service.
 *  Format: `projects/{project_id}/rulesets/{ruleset_id}`
 *  Output only.
 */
@property(nonatomic, copy, nullable) NSString *name;

/** `Source` for the `Ruleset`. */
@property(nonatomic, strong, nullable) GTLRFirebaseRules_Source *source;

@end


/**
 *  `Source` is one or more `File` messages comprising a logical set of rules.
 */
@interface GTLRFirebaseRules_Source : GTLRObject

/** `File` set constituting the `Source` bundle. */
@property(nonatomic, strong, nullable) NSArray<GTLRFirebaseRules_File *> *files;

@end


/**
 *  Position in the `Source` content including its line, column number, and an
 *  index of the `File` in the `Source` message. Used for debug purposes.
 */
@interface GTLRFirebaseRules_SourcePosition : GTLRObject

/**
 *  First column on the source line associated with the source fragment.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *column;

/** Name of the `File`. */
@property(nonatomic, copy, nullable) NSString *fileName;

/**
 *  Line number of the source fragment. 1-based.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *line;

@end


/**
 *  Test result message containing the state of the test as well as a
 *  description and source position for test failures.
 */
@interface GTLRFirebaseRules_TestResult : GTLRObject

/**
 *  Debug messages related to test execution issues encountered during
 *  evaluation.
 *  Debug messages may be related to too many or too few invocations of
 *  function mocks or to runtime errors that occur during evaluation.
 *  For example: ```Unable to read variable [name: "resource"]```
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *debugMessages;

/**
 *  Position in the `Source` or `Ruleset` where the principle runtime error
 *  occurs.
 *  Evaluation of an expression may result in an error. Rules are deny by
 *  default, so a `DENY` expectation when an error is generated is valid.
 *  When there is a `DENY` with an error, the `SourcePosition` is returned.
 *  E.g. `error_position { line: 19 column: 37 }`
 */
@property(nonatomic, strong, nullable) GTLRFirebaseRules_SourcePosition *errorPosition;

/**
 *  The set of function calls made to service-defined methods.
 *  Function calls are included in the order in which they are encountered
 *  during evaluation, are provided for both mocked and unmocked functions,
 *  and included on the response regardless of the test `state`.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRFirebaseRules_FunctionCall *> *functionCalls;

/**
 *  State of the test.
 *
 *  Likely values:
 *    @arg @c kGTLRFirebaseRules_TestResult_State_Failure Test is a failure.
 *        (Value: "FAILURE")
 *    @arg @c kGTLRFirebaseRules_TestResult_State_StateUnspecified Test state is
 *        not set. (Value: "STATE_UNSPECIFIED")
 *    @arg @c kGTLRFirebaseRules_TestResult_State_Success Test is a success.
 *        (Value: "SUCCESS")
 */
@property(nonatomic, copy, nullable) NSString *state;

@end


/**
 *  The request for FirebaseRulesService.TestRuleset.
 */
@interface GTLRFirebaseRules_TestRulesetRequest : GTLRObject

/**
 *  Optional `Source` to be checked for correctness.
 *  This field must not be set when the resource name refers to a `Ruleset`.
 */
@property(nonatomic, strong, nullable) GTLRFirebaseRules_Source *source;

@end


/**
 *  The response for FirebaseRulesService.TestRuleset.
 */
@interface GTLRFirebaseRules_TestRulesetResponse : GTLRObject

/**
 *  Syntactic and semantic `Source` issues of varying severity. Issues of
 *  `ERROR` severity will prevent tests from executing.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRFirebaseRules_Issue *> *issues;

/**
 *  The set of test results given the test cases in the `TestSuite`.
 *  The results will appear in the same order as the test cases appear in the
 *  `TestSuite`.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRFirebaseRules_TestResult *> *testResults;

@end

NS_ASSUME_NONNULL_END