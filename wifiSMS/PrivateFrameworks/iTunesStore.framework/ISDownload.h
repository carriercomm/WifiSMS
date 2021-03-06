/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSArray, ISDownloadStatus, <ISDownloadDelegate>, ISDownloadMetadata;



@interface ISDownload : NSObject <NSCoding>
{
    struct CGImage { } *_artworkImage;
    unsigned int _artworkIsLoading : 1;
    NSArray *_assets;
    <ISDownloadDelegate> *_delegate;
    ISDownloadMetadata *_metadata;
    ISDownloadStatus *_status;
}

@property(readonly) BOOL artworkURLIsPrerendered;
@property(readonly) NSString *bundleID;
@property(readonly) unsigned long long itemIdentifier;
@property(readonly) NSString *title;
@property(readonly) NSString *uniqueID;
@property(retain) ISDownloadStatus *status; /* unknown property attribute: V_status */
@property(retain) ISDownloadMetadata *metadata; /* unknown property attribute: V_metadata */
@property <ISDownloadDelegate> *delegate; /* unknown property attribute: V_delegate */
@property(retain) NSArray *assets; /* unknown property attribute: V_assets */


- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)loadArtworkImage;
- (BOOL)pause;
- (BOOL)resume;
- (struct CGImage { }*)artworkImage;
- (BOOL)artworkURLIsPrerendered;
- (id)bundleID;
- (unsigned long long)itemIdentifier;
- (id)title;
- (id)uniqueID;
- (void)_artworkFailedNotification:(id)arg1;
- (void)_artworkFinishedNotification:(id)arg1;
- (void)_daemonExited:(id)arg1;
- (void)_mainThreadDaemonExited:(id)arg1;
- (BOOL)_requestArtwork;
- (void)_sendArtworkToDelegate:(struct CGImage { }*)arg1;
- (void)_sendArtworkErrorToDelegate:(id)arg1;
- (void)_startWatchingForArtwork;
- (void)_stopWatchingForArtwork;
- (id)status;
- (void)setStatus:(id)arg1;
- (id)metadata;
- (void)setMetadata:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)assets;
- (void)setAssets:(id)arg1;

@end
