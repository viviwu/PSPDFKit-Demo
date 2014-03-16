//
//  PSPDFDocumentProviderDelegate.h
//  PSPDFKit
//
//  Copyright (c) 2013-2014 PSPDFKit GmbH. All rights reserved.
//
//  THIS SOURCE CODE AND ANY ACCOMPANYING DOCUMENTATION ARE PROTECTED BY INTERNATIONAL COPYRIGHT LAW
//  AND MAY NOT BE RESOLD OR REDISTRIBUTED. USAGE IS BOUND TO THE PSPDFKIT LICENSE AGREEMENT.
//  UNAUTHORIZED REPRODUCTION OR DISTRIBUTION IS SUBJECT TO CIVIL AND CRIMINAL PENALTIES.
//  This notice may not be removed from this file.
//

@import Foundation;

@class PSPDFDocumentProvider;

/// Delegate for writing annotations.
@protocol PSPDFDocumentProviderDelegate <NSObject>

@optional

/// Called before we append data to a PDF. Return NO to stop writing annotations.
/// Defaults to YES if not implemented, and will set a new `NSData` object.
- (BOOL)documentProvider:(PSPDFDocumentProvider *)documentProvider shouldAppendData:(NSData *)data;

// Called after the write is completed.
- (void)documentProvider:(PSPDFDocumentProvider *)documentProvider didAppendData:(NSData *)data;

@end
