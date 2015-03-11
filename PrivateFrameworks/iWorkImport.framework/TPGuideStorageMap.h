/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSMutableDictionary, TSUPointerKeyDictionary;

@interface TPGuideStorageMap : TSPObject {
    NSMutableDictionary *_pageIndexToStorageMap;
    TSUPointerKeyDictionary *_storageToPageIndexMap;
}

- (bool)containsGuideStorage:(id)arg1;
- (void)dealloc;
- (id)guideStorageForSectionPageIndex:(unsigned long long)arg1;
- (id)i_sortedPageIndices;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;
- (void)p_setGuideStorage:(id)arg1 forSectionPageIndex:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (unsigned long long)sectionPageIndexForGuideStorage:(id)arg1;

@end