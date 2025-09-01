#pragma once
#include <stdint.h>
#include "structs.h"

extern void _resolv_set_nameservers_for_net(unsigned netid, const char **servers, int numservers, const char *domains);

// --- dialog / interface ---
extern union std_string *_ZNK17storeservicescore14ProtocolDialog5titleEv(void *);
extern void *_ZTVNSt6__ndk120__shared_ptr_emplaceIN17storeservicescore22ProtocolDialogResponseENS_9allocatorIS2_EEEE;
extern void _ZN17storeservicescore22ProtocolDialogResponseC1Ev(void *);
extern struct std_vector *_ZNK17storeservicescore14ProtocolDialog7buttonsEv(void *);
extern union std_string *_ZNK17storeservicescore14ProtocolButton5titleEv(void *);
extern union std_string *_ZNK17storeservicescore14ProtocolDialog7messageEv(void *);
extern union std_string *_ZNK17storeservicescore18CredentialsRequest5titleEv(void *);
extern union std_string *_ZNK17storeservicescore18CredentialsRequest7messageEv(void *);
extern void _ZN17storeservicescore19CredentialsResponseC1Ev(void *);
extern void _ZN17storeservicescore22ProtocolDialogResponse17setSelectedButtonERKNSt6__ndk110shared_ptrINS_14ProtocolButtonEEE(void *, struct shared_ptr *);
extern void _ZN20androidstoreservices28AndroidPresentationInterface28handleProtocolDialogResponseERKlRKNSt6__ndk110shared_ptrIN17storeservicescore22ProtocolDialogResponseEEE(void *, long *, struct shared_ptr *);

// --- credentials ---
extern uint8_t _ZNK17storeservicescore18CredentialsRequest28requiresHSA2VerificationCodeEv(void *);
extern void *_ZTVNSt6__ndk120__shared_ptr_emplaceIN17storeservicescore19CredentialsResponseENS_9allocatorIS2_EEEE;
extern void _ZN17storeservicescore19CredentialsResponse11setUserNameERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void *, union std_string *);
extern void _ZN17storeservicescore19CredentialsResponse11setPasswordERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void *, union std_string *);
extern void _ZN17storeservicescore19CredentialsResponse15setResponseTypeENS0_12ResponseTypeE(void *, int responseType);
extern void _ZN20androidstoreservices28AndroidPresentationInterface25handleCredentialsResponseERKNSt6__ndk110shared_ptrIN17storeservicescore19CredentialsResponseEEE(void *, struct shared_ptr *);


// --- decryption ---
extern void _ZN21SVFootHillSessionCtrl9cleanKeysERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void *, union std_string *);
extern void _ZN21SVFootHillSessionCtrl16getPersistentKeyERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEES8_S8_S8_S8_S8_S8_S8_(struct shared_ptr *, void *, union std_string *, union std_string *, union std_string *, union std_string *, union std_string *, union std_string *, union std_string *, union std_string *);
void _ZN21SVFootHillSessionCtrl16getPersistentKeyERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEES8_S8_S8_S8_S8_S8_S8_ASM(struct shared_ptr *persistent_key, void *instance, union std_string * adam_id, union std_string *prefetch_adam_id, union std_string *key_uri, union std_string *key_format, union std_string *key_format_ver, union std_string *server_uri, union std_string *protocol_type, union std_string *fps_cert) {
    asm volatile(
        "mov x8, %0\n"
        "mov x0, %1\n"
        "mov x1, %2\n"
        "mov x2, %3\n"
        "mov x3, %4\n"
        "mov x4, %5\n"
        "mov x5, %6\n"
        "mov x6, %7\n"
        "mov x7, %8\n"
        "sub sp, sp, #0x10\n"
        "mov x9, %9\n"
        "str x9, [sp]\n"
        "bl _ZN21SVFootHillSessionCtrl16getPersistentKeyERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEES8_S8_S8_S8_S8_S8_S8_\n"
        "add sp, sp, #0x10\n"
        :
        : "r" (persistent_key), "r" (instance), "r" (adam_id), "r" (prefetch_adam_id), "r" (key_uri), "r" (key_format), "r" (key_format_ver), "r" (server_uri), "r" (protocol_type), "r" (fps_cert)
        : "x8", "x0", "x1", "x2", "x3", "x4", "x5", "x6", "x7", "x9", "memory", "lr"
    );
}
extern void _ZN21SVFootHillSessionCtrl14decryptContextERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEERKN11SVDecryptor15SVDecryptorTypeERKb(struct shared_ptr *, void *, void *);
void _ZN21SVFootHillSessionCtrl14decryptContextERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEERKN11SVDecryptor15SVDecryptorTypeERKbASM(struct shared_ptr *decrypted_context, void *instance, void *context) {
    asm volatile(
        "mov x8, %0\n"
        "mov x0, %1\n"
        "mov x1, %2\n"
        "bl _ZN21SVFootHillSessionCtrl14decryptContextERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEERKN11SVDecryptor15SVDecryptorTypeERKb\n"
        :
        : "r" (decrypted_context), "r" (instance), "r" (context)
        : "x8", "x0", "x1", "memory", "lr"
    );
}
extern void **_ZNK18SVFootHillPContext9kdContextEv(void *);
extern long NfcRKVnxuKZy04KWbdFu71Ou(void *, uint32_t, void *, void *, size_t); // Decryption function
extern void *_ZN21SVFootHillSessionCtrl8instanceEv();
void *getFootHillInstance() {
    return _ZN21SVFootHillSessionCtrl8instanceEv();
}

const char *const fairplay_cert = "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";

// --- playback ---
extern void _ZN22SVPlaybackLeaseManagerC2ERKNSt6__ndk18functionIFvRKiEEERKNS1_IFvRKNS0_10shared_ptrIN17storeservicescore19StoreErrorConditionEEEEEE(void *, void *, void *);
extern void _ZN22SVPlaybackLeaseManager25refreshLeaseAutomaticallyERKb(void *, uint8_t *);
extern void _ZN22SVPlaybackLeaseManager12requestLeaseERKb(void *, uint8_t *);

extern void _ZN22SVPlaybackLeaseManager12requestAssetERKmRKNSt6__ndk16vectorINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS7_IS9_EEEERKb(void *, void *, unsigned long *, struct std_vector *, uint8_t *);
void _ZN22SVPlaybackLeaseManager12requestAssetERKmRKNSt6__ndk16vectorINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS7_IS9_EEEERKbASM(struct shared_ptr *result, void *leaseMgr, unsigned long *adam, struct std_vector *hls_param, uint8_t *z0) {
    asm volatile(
        "mov x8, %0\n"
        "mov x0, %1\n"
        "mov x1, %2\n"
        "mov x2, %3\n"
        "mov x3, %4\n"
        "bl _ZN22SVPlaybackLeaseManager12requestAssetERKmRKNSt6__ndk16vectorINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS7_IS9_EEEERKb\n"
        :
        : "r" (result), "r" (leaseMgr), "r" (adam), "r" (hls_param), "r" (z0)
        : "x8", "x0", "x1", "x2", "x3", "lr"
    );
}
extern int _ZNK23SVPlaybackAssetResponse13hasValidAssetEv(void *);
extern struct shared_ptr *_ZNK23SVPlaybackAssetResponse13playbackAssetEv(void *);
extern void _ZNK17storeservicescore13PlaybackAsset9URLStringEv(void *, uint8_t *);
void _ZNK17storeservicescore13PlaybackAsset9URLStringEvASM(void *url, void *playback_asset) {
    asm volatile(
        "mov x8, %0\n"
        "mov x0, %1\n"
        "bl _ZNK17storeservicescore13PlaybackAsset9URLStringEv\n"
        :
        : "r" (url), "r" (playback_asset)
        : "x8", "x0", "lr"
    );
}

// --- request context ---
extern void _ZNSt6__ndk110shared_ptrIN17storeservicescore14RequestContextEE11make_sharedIJRNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEES3_DpOT_(struct shared_ptr *, union std_string *);
void _ZNSt6__ndk110shared_ptrIN17storeservicescore14RequestContextEE11make_sharedIJRNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEES3_DpOT_ASM(struct shared_ptr *reqCtx, union std_string *str) {
    asm volatile(
        "mov x8, %0\n"
        "mov x0, %1\n"
        "bl _ZNSt6__ndk110shared_ptrIN17storeservicescore14RequestContextEE11make_sharedIJRNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEES3_DpOT_\n"
        :
        : "r" (reqCtx), "r" (str)
        : "x8", "x0", "lr"
    );
}
struct shared_ptr *newRequestContext(const char *str)
{
    struct shared_ptr *reqCtx = (struct shared_ptr *)malloc(sizeof(struct shared_ptr));
    union std_string strBuf = new_std_string(str);
    _ZNSt6__ndk110shared_ptrIN17storeservicescore14RequestContextEE11make_sharedIJRNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEES3_DpOT_ASM(reqCtx, &strBuf);
    return reqCtx;
}

extern void *_ZTVNSt6__ndk120__shared_ptr_emplaceIN17storeservicescore20RequestContextConfigENS_9allocatorIS2_EEEE;
extern void _ZN17storeservicescore20RequestContextConfigC2Ev(void *);
struct shared_ptr *getRequestContextConfig() {
    uint8_t *ptr = (uint8_t *)malloc(480);
    *(void **)(ptr) = &_ZTVNSt6__ndk120__shared_ptr_emplaceIN17storeservicescore20RequestContextConfigENS_9allocatorIS2_EEEE + 2;

    struct shared_ptr *reqCtxConfig = (struct shared_ptr *)malloc(sizeof(struct shared_ptr));
    reqCtxConfig->obj = ptr + 32;
    reqCtxConfig->ctrl_blk = ptr;

    _ZN17storeservicescore20RequestContextConfigC2Ev(reqCtxConfig->obj);
    return reqCtxConfig;
}

extern void _ZN17storeservicescore20RequestContextConfig20setBaseDirectoryPathERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void *, union std_string *);
extern void _ZN17storeservicescore20RequestContextConfig19setClientIdentifierERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void *, union std_string *);
extern void _ZN17storeservicescore20RequestContextConfig20setVersionIdentifierERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void *, union std_string *);
extern void _ZN17storeservicescore20RequestContextConfig21setPlatformIdentifierERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void *, union std_string *);
extern void _ZN17storeservicescore20RequestContextConfig17setProductVersionERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void *, union std_string *);
extern void _ZN17storeservicescore20RequestContextConfig14setDeviceModelERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void *, union std_string *);
extern void _ZN17storeservicescore20RequestContextConfig15setBuildVersionERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void *, union std_string *);
extern void _ZN17storeservicescore20RequestContextConfig19setLocaleIdentifierERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void *, union std_string *);
extern void _ZN17storeservicescore20RequestContextConfig21setLanguageIdentifierERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void *, union std_string *);
void prepareRequestContextConfig(struct shared_ptr *reqCtxConfig)
{
    union std_string baseDirectoryPath = new_std_string("/data/data/com.apple.android.music/files/mpl_db");
    _ZN17storeservicescore20RequestContextConfig20setBaseDirectoryPathERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(reqCtxConfig->obj, &baseDirectoryPath);

    union std_string clientIdentifier = new_std_string("Music");
    _ZN17storeservicescore20RequestContextConfig19setClientIdentifierERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(reqCtxConfig->obj, &clientIdentifier);

    union std_string versionIdentifier = new_std_string("4.9.2");
    _ZN17storeservicescore20RequestContextConfig20setVersionIdentifierERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(reqCtxConfig->obj, &versionIdentifier);

    union std_string platformIdentifier = new_std_string("Android");
    _ZN17storeservicescore20RequestContextConfig21setPlatformIdentifierERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(reqCtxConfig->obj, &platformIdentifier);

    union std_string productVersion = new_std_string("15");
    _ZN17storeservicescore20RequestContextConfig17setProductVersionERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(reqCtxConfig->obj, &productVersion);

    union std_string deviceModel = new_std_string("Pixel 8");
    _ZN17storeservicescore20RequestContextConfig14setDeviceModelERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(reqCtxConfig->obj, &deviceModel);

    union std_string buildVersion = new_std_string("7663313");
    _ZN17storeservicescore20RequestContextConfig15setBuildVersionERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(reqCtxConfig->obj, &buildVersion);

    union std_string locale = new_std_string("en_US");
    _ZN17storeservicescore20RequestContextConfig19setLocaleIdentifierERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(reqCtxConfig->obj, &locale);
    _ZN17storeservicescore20RequestContextConfig21setLanguageIdentifierERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(reqCtxConfig->obj, &locale);
}

extern void _ZN21RequestContextManager9configureERKNSt6__ndk110shared_ptrIN17storeservicescore14RequestContextEEE(struct shared_ptr *);
void configureRequestContext(struct shared_ptr *reqCtx)
{
    _ZN21RequestContextManager9configureERKNSt6__ndk110shared_ptrIN17storeservicescore14RequestContextEEE(reqCtx);
}


extern void _ZN17storeservicescore14RequestContext4initERKNSt6__ndk110shared_ptrINS_20RequestContextConfigEEE(void *, void *, struct shared_ptr *);
void _ZN17storeservicescore14RequestContext4initERKNSt6__ndk110shared_ptrINS_20RequestContextConfigEEEASM(uint8_t *buf, struct shared_ptr *reqCtx, struct shared_ptr *reqCtxConfig) {
    asm volatile(
        "mov x8, %0\n"
        "mov x0, %1\n"
        "mov x1, %2\n"
        "bl _ZN17storeservicescore14RequestContext4initERKNSt6__ndk110shared_ptrINS_20RequestContextConfigEEE\n"
        :
        : "r" (buf), "r" (reqCtx), "r" (reqCtxConfig)
        : "x8", "x0", "x1", "lr"
    );
}
void initRequestContext(uint8_t *buf, struct shared_ptr *reqCtx, struct shared_ptr *reqCtxConfig)
{
    _ZN17storeservicescore14RequestContext4initERKNSt6__ndk110shared_ptrINS_20RequestContextConfigEEEASM(buf, reqCtx->obj, reqCtxConfig);
}


extern void _ZN17storeservicescore14RequestContext24setFairPlayDirectoryPathERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void *, union std_string *);

void setFairPlayDirectoryPath(struct shared_ptr *reqCtx, const char *str)
{
    union std_string strBuf = new_std_string(str);
    _ZN17storeservicescore14RequestContext24setFairPlayDirectoryPathERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(reqCtx->obj, &strBuf);
}

const char *const android_id = "f39a6c2e8b1d4f7a";

// --- interface ---
extern void _ZNSt6__ndk110shared_ptrIN20androidstoreservices28AndroidPresentationInterfaceEE11make_sharedIJEEES3_DpOT_(struct shared_ptr *);
void _ZNSt6__ndk110shared_ptrIN20androidstoreservices28AndroidPresentationInterfaceEE11make_sharedIJEEES3_DpOT_ASM(struct shared_ptr *apInterface) {
    asm volatile(
        "mov x8, %0\n"
        "bl _ZNSt6__ndk110shared_ptrIN20androidstoreservices28AndroidPresentationInterfaceEE11make_sharedIJEEES3_DpOT_\n"
        :
        : "r" (apInterface)
        : "x8", "x0", "lr"
    );
}
extern void _ZN20androidstoreservices28AndroidPresentationInterface16setDialogHandlerEPFvlNSt6__ndk110shared_ptrIN17storeservicescore14ProtocolDialogEEENS2_INS_36AndroidProtocolDialogResponseHandlerEEEE(void *, void (*)(long, struct shared_ptr *, struct shared_ptr *));
extern void _ZN20androidstoreservices28AndroidPresentationInterface21setCredentialsHandlerEPFvNSt6__ndk110shared_ptrIN17storeservicescore18CredentialsRequestEEENS2_INS_33AndroidCredentialsResponseHandlerEEEE(void *, void (*)(struct shared_ptr *, struct shared_ptr *));
void initPresentationInterface(
    struct shared_ptr *apInterface,
    void (*dialog_handler)(long, struct shared_ptr *, struct shared_ptr *),
    void (*credentials_handler)(struct shared_ptr *, struct shared_ptr *)
)
{
    _ZNSt6__ndk110shared_ptrIN20androidstoreservices28AndroidPresentationInterfaceEE11make_sharedIJEEES3_DpOT_ASM(apInterface);
    _ZN20androidstoreservices28AndroidPresentationInterface16setDialogHandlerEPFvlNSt6__ndk110shared_ptrIN17storeservicescore14ProtocolDialogEEENS2_INS_36AndroidProtocolDialogResponseHandlerEEEE(apInterface->obj, dialog_handler);
    _ZN20androidstoreservices28AndroidPresentationInterface21setCredentialsHandlerEPFvNSt6__ndk110shared_ptrIN17storeservicescore18CredentialsRequestEEENS2_INS_33AndroidCredentialsResponseHandlerEEEE(apInterface->obj, credentials_handler);
}

extern void _ZN17storeservicescore14RequestContext24setPresentationInterfaceERKNSt6__ndk110shared_ptrINS_21PresentationInterfaceEEE(void *, struct shared_ptr *);
void setPresentationInterface(struct shared_ptr *reqCtx, struct shared_ptr *apInterface)
{
    _ZN17storeservicescore14RequestContext24setPresentationInterfaceERKNSt6__ndk110shared_ptrINS_21PresentationInterfaceEEE(reqCtx->obj, apInterface);
}


// --- auth flow ---
extern void _ZNSt6__ndk110shared_ptrIN17storeservicescore16AuthenticateFlowEE11make_sharedIJRNS0_INS1_14RequestContextEEEEEES3_DpOT_(struct shared_ptr *, struct shared_ptr *);
void _ZNSt6__ndk110shared_ptrIN17storeservicescore16AuthenticateFlowEE11make_sharedIJRNS0_INS1_14RequestContextEEEEEES3_DpOT_ASM(struct shared_ptr *flow, struct shared_ptr *reqCtx) {
    asm volatile(
        "mov x8, %0\n"
        "mov x0, %1\n"
        "bl _ZNSt6__ndk110shared_ptrIN17storeservicescore16AuthenticateFlowEE11make_sharedIJRNS0_INS1_14RequestContextEEEEEES3_DpOT_\n"
        :
        : "r" (flow), "r" (reqCtx)
        : "x8", "x0", "lr"
    );
}
extern void _ZN17storeservicescore16AuthenticateFlow3runEv(void *);
extern struct shared_ptr *_ZNK17storeservicescore16AuthenticateFlow8responseEv(void *);
extern int _ZNK17storeservicescore20AuthenticateResponse12responseTypeEv(void *);
extern void _ZN14FootHillConfig6configERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(union std_string *);
extern void _ZN17storeservicescore10DeviceGUID8instanceEv(struct shared_ptr *);
void _ZN17storeservicescore10DeviceGUID8instanceEvASM(struct shared_ptr *GUID) {
    asm volatile(
        "mov x8, %0\n"
        "bl _ZN17storeservicescore10DeviceGUID8instanceEv\n"
        :
        : "r" (GUID)
        : "x8", "x0", "lr"
    );
}
extern void _ZN17storeservicescore10DeviceGUID9configureERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_RKjRKb(void *, void *, union std_string *, union std_string *, unsigned int *, uint8_t *);
void _ZN17storeservicescore10DeviceGUID9configureERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_RKjRKbASM(void *ret, void *GUID, union std_string *config1, union std_string *config2, unsigned int *config3, uint8_t *config4) {
    asm volatile(
        "mov x8, %0\n"
        "mov x0, %1\n"
        "mov x1, %2\n"
        "mov x2, %3\n"
        "mov x3, %4\n"
        "mov x4, %5\n"
        "bl _ZN17storeservicescore10DeviceGUID9configureERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_RKjRKb\n"
        :
        : "r" (ret), "r" (GUID), "r" (config1), "r" (config2), "r" (config3), "r" (config4)
        : "x8", "x0", "x1", "x2", "x3", "x4", "lr"
    );
}

// --- token service ---
extern union std_string *_ZNK17storeservicescore14RequestContext20storeFrontIdentifierERKNSt6__ndk110shared_ptrINS_6URLBagEEE(void *, void *, struct shared_ptr *);
void _ZNK17storeservicescore14RequestContext20storeFrontIdentifierERKNSt6__ndk110shared_ptrINS_6URLBagEEEASM(void *p1, void *p2, struct shared_ptr *p3) {
    asm volatile(
        "mov x8, %0\n"
        "mov x0, %1\n"
        "mov x1, %2\n"
        "bl _ZNK17storeservicescore14RequestContext20storeFrontIdentifierERKNSt6__ndk110shared_ptrINS_6URLBagEEE\n"
        :
        :"r" (p1), "r" (p2), "r" (p3)
        : "x8", "x0", "x1", "lr"
    );
}
extern void *_ZTVNSt6__ndk120__shared_ptr_emplaceIN13mediaplatform11HTTPMessageENS_9allocatorIS2_EEEE;
extern void *_ZN13mediaplatform11HTTPMessageC2ENSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES7_(void *,  union std_string *, union std_string *);
extern void _ZN13mediaplatform11HTTPMessage9setHeaderERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_(void *, union std_string *, union std_string *);
extern void _ZN13mediaplatform11HTTPMessage11setBodyDataEPcm(void *,char *, u_long);
extern void *_ZN17storeservicescore10DeviceGUID4guidEv(void *p1, void *p2);
void _ZN17storeservicescore10DeviceGUID4guidEvASM(void *ret_buffer, void *guid_instance) {
    asm volatile(
        "mov x8, %0\n"
        "mov x0, %1\n"
        "bl _ZN17storeservicescore10DeviceGUID4guidEv\n"
        :
        : "r" (ret_buffer), "r" (guid_instance)
        : "x8", "x0", "lr"
    );
}
extern char *_ZNK13mediaplatform4Data5bytesEv(void *);
extern void *_ZN17storeservicescore10URLRequestC2ERKNSt6__ndk110shared_ptrIN13mediaplatform11HTTPMessageEEERKNS2_INS_14RequestContextEEE(void *, struct shared_ptr *, struct shared_ptr *);
extern void *_ZN17storeservicescore10URLRequest19setRequestParameterERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_(void *, union std_string *, union std_string *);
extern void *_ZN17storeservicescore10URLRequest3runEv(void *);
extern struct shared_ptr *_ZNK17storeservicescore10URLRequest5errorEv(void *);
extern struct shared_ptr *_ZNK17storeservicescore10URLRequest8responseEv(void *);
extern struct shared_ptr *_ZNK17storeservicescore11URLResponse18underlyingResponseEv(void *);

// --- logging ---
extern uint8_t _ZN13mediaplatform26DebugLogEnabledForPriorityENS_11LogPriorityE();
extern int __android_log_print(int prio, const char *tag, const char *fmt, ...);