/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UIToolbar, MLPhotoAlbum, PLEmptyAlbumView, PLThumbnailTableCell, UITableView, PLImageCountCell, NSMutableSet;



@interface PLAlbumView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    MLPhotoAlbum *_album;
    NSInteger _filter;
    UITableView *_indexTableView;
    UIToolbar *_toolbar;
    NSUInteger _gridHeight;
    struct CGSize { 
        float width; 
        float height; 
    } _cellSize;
    BOOL _showImageCount;
    id _delegate;
    PLThumbnailTableCell *_highlightedCell;
    PLImageCountCell *_imageCountCell;
    PLEmptyAlbumView *_emptyAlbumView;
    BOOL _forceTableReload;
    BOOL _pictureWasTakenSinceLastReload;
    BOOL _isCameraAlbum;
    BOOL _didScrollToBottom;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _lastTableContentInset;
    unsigned int _multipleSelectionEnabled : 1;
    NSMutableSet *_selectedPhotos;
    struct __CFDictionary { } *_selectedPhotoIndexesByRow;
    unsigned int _canShowCopyCallout : 1;
}

@property id delegate;
@property(retain) MLPhotoAlbum *album;
@property NSInteger filter;
@property(retain) UIToolbar *toolbar;
@property BOOL canShowCopyCallout;
@property BOOL multipleSelectionEnabled;
@property(readonly) NSSet *selectedPhotos;


- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableCellSelectionStateDidChange:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableCellCopyCalloutWillDisappear:(id)arg1;
- (void)tableCell:(id)arg1 requestsDeletionOfPhotoAtIndex:(NSUInteger)arg2;
- (void)storeCurrentConfiguration:(id)arg1;
- (void)loadCurrentConfiguration:(id)arg1;
- (id)album;
- (void)setAlbum:(id)arg1;
- (NSInteger)filter;
- (void)setFilter:(NSInteger)arg1;
- (id)toolbar;
- (void)setToolbar:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)reloadIndexTable;
- (id)indexTable;
- (void)clearSelection;
- (void)scrollRowToVisible:(NSInteger)arg1;
- (void)viewWillBeDisplayed;
- (id)indexTableView;
- (void)setCanShowCopyCallout:(BOOL)arg1;
- (BOOL)canShowCopyCallout;
- (void)setMultipleSelectionEnabled:(BOOL)arg1;
- (BOOL)multipleSelectionEnabled;
- (id)selectedPhotos;
- (void)_scrollToBottom;
- (void)_setupIndexTable;
- (NSUInteger)_calculateGridHeightForCount:(NSInteger)arg1;
- (struct CGSize { float x1; float x2; })_indexCellSizeForCount:(NSInteger)arg1;
- (id)_imageCountCell;
- (void)_albumContentsDidChange:(id)arg1;
- (void)_cameraAlbumDidChange:(id)arg1;
- (void)_updateToolbar;

@end
