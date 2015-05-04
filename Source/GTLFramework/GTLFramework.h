//
//  GTLFramework.h
//  GTLFramework
//
//  Created by Michał Zaborowski on 04.05.2015.
//
//

#import <UIKit/UIKit.h>

//! Project version number for GTLFramework.
FOUNDATION_EXPORT double GTLFrameworkVersionNumber;

//! Project version string for GTLFramework.
FOUNDATION_EXPORT const unsigned char GTLFrameworkVersionString[];

void GTLFrameworkVersion(NSUInteger* major, NSUInteger* minor, NSUInteger* release);

// Returns the version in @"a.b" or @"a.b.c" format
NSString *GTLFrameworkVersionStringFormat(void);

// In this header, you should import all the public headers of your framework using statements like #import <GTLFramework/PublicHeader.h>
#import <GTLFramework/GTLDefines.h>
#import <GTLFramework/GTLYouTube.h>

#import <GTLFramework/GTMOAuth2ViewControllerTouch.h>
#import <GTLFramework/GTMOAuth2SignIn.h>
#import <GTLFramework/GTMOAuth2Authentication.h>
#import <GTLFramework/GTMReadMonitorInputStream.h>
#import <GTLFramework/GTMMIMEDocument.h>
#import <GTLFramework/GTMGatherInputStream.h>
#import <GTLFramework/GTMHTTPUploadFetcher.h>
#import <GTLFramework/GTMHTTPFetchHistory.h>
#import <GTLFramework/GTMHTTPFetcherLogging.h>
#import <GTLFramework/GTMHTTPFetcher.h>
#import <GTLFramework/GTMHTTPFetcherService.h>
#import <GTLFramework/GTLBase64.h>
#import <GTLFramework/GTLUtilities.h>
#import <GTLFramework/GTLTargetNamespace.h>
#import <GTLFramework/GTLJSONParser.h>
#import <GTLFramework/GTLRuntimeCommon.h>
#import <GTLFramework/GTLErrorObject.h>
#import <GTLFramework/GTLDateTime.h>
#import <GTLFramework/GTLUploadParameters.h>
#import <GTLFramework/GTLBatchResult.h>
#import <GTLFramework/GTLService.h>
#import <GTLFramework/GTLBatchQuery.h>
#import <GTLFramework/GTLQuery.h>
#import <GTLFramework/GTLObject.h>


