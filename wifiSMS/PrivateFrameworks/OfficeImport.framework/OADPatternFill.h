/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADPattern, OADColor;



@interface OADPatternFill : OADFill 
{
    OADColor *mFgColor;
    BOOL mIsFgColorOverridden;
    OADColor *mBgColor;
    BOOL mIsBgColorOverridden;
    OADPattern *mPattern;
    BOOL mIsPatternOverridden;
}

+ (id)defaultProperties;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithDefaults;
- (void)setParent:(id)arg1;
- (id)fgColor;
- (void)setFgColor:(id)arg1;
- (BOOL)isFgColorOverridden;
- (id)bgColor;
- (void)setBgColor:(id)arg1;
- (BOOL)isBgColorOverridden;
- (id)pattern;
- (void)setPattern:(id)arg1;
- (BOOL)isPatternOverridden;
- (void)setColor:(id)arg1;
- (void)setStyleColor:(id)arg1;

@end
