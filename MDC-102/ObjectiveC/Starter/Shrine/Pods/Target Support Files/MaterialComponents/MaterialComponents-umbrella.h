#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "MaterialActivityIndicator.h"
#import "MDCActivityIndicator.h"
#import "MDCActivityIndicatorColorThemer.h"
#import "CAMediaTimingFunction+MDCAnimationTiming.h"
#import "MaterialAnimationTiming.h"
#import "UIView+MDCTimingFunction.h"
#import "MaterialAppBar.h"
#import "MDCAppBar.h"
#import "MDCAppBarContainerViewController.h"
#import "MDCAppBarColorThemer.h"
#import "MaterialBottomAppBar.h"
#import "MDCBottomAppBarView.h"
#import "MDCBottomAppBarColorThemer.h"
#import "MaterialBottomNavigation.h"
#import "MDCBottomNavigationBar.h"
#import "MDCBottomNavigationBarColorThemer.h"
#import "MDCBottomNavigationBarTypographyThemer.h"
#import "MaterialBottomSheet.h"
#import "MDCBottomSheetController.h"
#import "MDCBottomSheetPresentationController.h"
#import "MDCBottomSheetTransitionController.h"
#import "UIViewController+MaterialBottomSheet.h"
#import "MaterialButtonBar.h"
#import "MDCButtonBar.h"
#import "MDCButtonBarButton.h"
#import "MDCButtonBarColorThemer.h"
#import "MaterialButtons.h"
#import "MDCButton.h"
#import "MDCFlatButton.h"
#import "MDCFloatingButton+Animation.h"
#import "MDCFloatingButton.h"
#import "MDCRaisedButton.h"
#import "MDCButtonColorThemer.h"
#import "MDCButtonTitleColorAccessibilityMutator.h"
#import "MDCButtonTypographyThemer.h"
#import "MaterialCards.h"
#import "MDCCard.h"
#import "MDCCardCollectionCell.h"
#import "UICollectionViewController+MDCCardReordering.h"
#import "MaterialChips.h"
#import "MDCChipCollectionViewCell.h"
#import "MDCChipCollectionViewFlowLayout.h"
#import "MDCChipField.h"
#import "MDCChipView.h"
#import "MDCChipViewFontThemer.h"
#import "MDCChipViewTypographyThemer.h"
#import "MaterialCollectionCells.h"
#import "MDCCollectionViewCell.h"
#import "MDCCollectionViewTextCell.h"
#import "MaterialCollectionLayoutAttributes.h"
#import "MDCCollectionViewLayoutAttributes.h"
#import "MaterialCollections.h"
#import "MDCCollectionViewController.h"
#import "MDCCollectionViewEditing.h"
#import "MDCCollectionViewEditingDelegate.h"
#import "MDCCollectionViewFlowLayout.h"
#import "MDCCollectionViewStyling.h"
#import "MDCCollectionViewStylingDelegate.h"
#import "MaterialDialogs.h"
#import "MDCAlertController.h"
#import "MDCAlertControllerView.h"
#import "MDCDialogPresentationController.h"
#import "MDCDialogTransitionController.h"
#import "UIViewController+MaterialDialogs.h"
#import "MDCAlertColorThemer.h"
#import "MDCAlertTypographyThemer.h"
#import "MaterialFeatureHighlight.h"
#import "MDCFeatureHighlightView.h"
#import "MDCFeatureHighlightViewController.h"
#import "MDCFeatureHighlightColorThemer.h"
#import "MDCFeatureHighlightAccessibilityMutator.h"
#import "MDCFeatureHighlightFontThemer.h"
#import "MDCFeatureHighlightTypographyThemer.h"
#import "MaterialFlexibleHeader.h"
#import "MDCFlexibleHeaderContainerViewController.h"
#import "MDCFlexibleHeaderView.h"
#import "MDCFlexibleHeaderViewController.h"
#import "MDCFlexibleHeaderColorThemer.h"
#import "MaterialHeaderStackView.h"
#import "MDCHeaderStackView.h"
#import "MDCHeaderStackViewColorThemer.h"
#import "MaterialInk.h"
#import "MDCInkGestureRecognizer.h"
#import "MDCInkTouchController.h"
#import "MDCInkView.h"
#import "MDCInkColorThemer.h"
#import "MaterialLibraryInfo.h"
#import "MDCLibraryInfo.h"
#import "MaterialMaskedTransition.h"
#import "MDCMaskedTransitionController.h"
#import "MaterialNavigationBar.h"
#import "MDCNavigationBar.h"
#import "MDCNavigationBarColorThemer.h"
#import "MDCNavigationBarTypographyThemer.h"
#import "MaterialOverlayWindow.h"
#import "MDCOverlayWindow.h"
#import "MaterialPageControl.h"
#import "MDCPageControl.h"
#import "MDCPageControlColorThemer.h"
#import "MaterialPalettes.h"
#import "MDCPalettes.h"
#import "MaterialProgressView.h"
#import "MDCProgressView.h"
#import "MDCProgressViewColorThemer.h"
#import "MaterialShadowElevations.h"
#import "MDCShadowElevations.h"
#import "MaterialShadowLayer.h"
#import "MDCShadowLayer.h"
#import "MaterialSlider.h"
#import "MDCSlider.h"
#import "MDCSliderColorThemer.h"
#import "MaterialSnackbar.h"
#import "MDCSnackbarManager.h"
#import "MDCSnackbarMessage.h"
#import "MDCSnackbarMessageView.h"
#import "MDCSnackbarColorThemer.h"
#import "MDCSnackbarFontThemer.h"
#import "MDCSnackbarTypographyThemer.h"
#import "MaterialTabs.h"
#import "MDCTabBar.h"
#import "MDCTabBarAlignment.h"
#import "MDCTabBarIndicatorAttributes.h"
#import "MDCTabBarIndicatorContext.h"
#import "MDCTabBarIndicatorTemplate.h"
#import "MDCTabBarItemAppearance.h"
#import "MDCTabBarTextTransform.h"
#import "MDCTabBarUnderlineIndicatorTemplate.h"
#import "MDCTabBarViewController.h"
#import "MDCTabBarColorThemer.h"
#import "MDCTabBarFontThemer.h"
#import "MDCTabBarTypographyThemer.h"
#import "MaterialTextFields.h"
#import "MDCIntrinsicHeightTextView.h"
#import "MDCMultilineTextField.h"
#import "MDCMultilineTextInputDelegate.h"
#import "MDCTextField.h"
#import "MDCTextFieldPositioningDelegate.h"
#import "MDCTextInput.h"
#import "MDCTextInputBorderView.h"
#import "MDCTextInputCharacterCounter.h"
#import "MDCTextInputController.h"
#import "MDCTextInputControllerBase.h"
#import "MDCTextInputControllerFilled.h"
#import "MDCTextInputControllerFloatingPlaceholder.h"
#import "MDCTextInputControllerFullWidth.h"
#import "MDCTextInputControllerLegacyDefault.h"
#import "MDCTextInputControllerLegacyFullWidth.h"
#import "MDCTextInputControllerOutlined.h"
#import "MDCTextInputControllerOutlinedTextArea.h"
#import "MDCTextInputControllerUnderline.h"
#import "MDCTextInputUnderlineView.h"
#import "MDCTextFieldColorThemer.h"
#import "MDCTextFieldFontThemer.h"
#import "MDCTextFieldTypographyThemer.h"
#import "MaterialThemes.h"
#import "MDCColorScheme.h"
#import "MDCFontScheme.h"
#import "MDCTonalColorScheme.h"
#import "MDCTonalPalette.h"
#import "MaterialTypography.h"
#import "MDCFontTextStyle.h"
#import "MDCTypography.h"
#import "UIFont+MaterialTypography.h"
#import "UIFontDescriptor+MaterialTypography.h"
#import "MaterialApplication.h"
#import "UIApplication+AppExtensions.h"
#import "MaterialIcons.h"
#import "MDCIcons+BundleLoader.h"
#import "MDCIcons.h"
#import "MaterialIcons+ic_arrow_back.h"
#import "MaterialIcons+ic_check.h"
#import "MaterialIcons+ic_check_circle.h"
#import "MaterialIcons+ic_chevron_right.h"
#import "MaterialIcons+ic_info.h"
#import "MaterialIcons+ic_radio_button_unchecked.h"
#import "MaterialIcons+ic_reorder.h"
#import "MaterialKeyboardWatcher.h"
#import "MDCKeyboardWatcher.h"
#import "MaterialMath.h"
#import "MDCMath.h"
#import "MaterialOverlay.h"
#import "MDCOverlayImplementor.h"
#import "MDCOverlayObserver.h"
#import "MDCOverlayTransitioning.h"
#import "MaterialShapeLibrary.h"
#import "MDCCurvedCornerTreatment.h"
#import "MDCCurvedRectShapeGenerator.h"
#import "MDCCutCornerTreatment.h"
#import "MDCPillShapeGenerator.h"
#import "MDCRoundedCornerTreatment.h"
#import "MDCSlantedRectShapeGenerator.h"
#import "MDCTriangleEdgeTreatment.h"
#import "MaterialShapes.h"
#import "MDCCornerTreatment.h"
#import "MDCEdgeTreatment.h"
#import "MDCPathGenerator.h"
#import "MDCRectangleShapeGenerator.h"
#import "MDCShapedShadowLayer.h"
#import "MDCShapedView.h"
#import "MDCShapeGenerating.h"
#import "MaterialThumbTrack.h"
#import "MDCNumericValueLabel.h"
#import "MDCThumbTrack.h"
#import "MDCThumbView.h"
#import "MaterialUIMetrics.h"
#import "MDCLayoutMetrics.h"
#import "MaterialColorScheme.h"
#import "MDCLegacyColorScheme.h"
#import "MDCLegacyTonalColorScheme.h"
#import "MDCLegacyTonalPalette.h"
#import "MDCSemanticColorScheme.h"
#import "MaterialTypographyScheme.h"
#import "MDCLegacyFontScheme.h"
#import "MDCTypographyScheme.h"

FOUNDATION_EXPORT double MaterialComponentsVersionNumber;
FOUNDATION_EXPORT const unsigned char MaterialComponentsVersionString[];

