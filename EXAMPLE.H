Add this code in java menu

        byte[] bgdecode = Base64.decode(BgImage(), 0);
        Bitmap bgimg = BitmapFactory.decodeByteArray(bgdecode,0,bgdecode.length);
        BitmapDrawable bgdrawable = new BitmapDrawable(bgimg);
        bgdrawable.setTileModeXY(Shader.TileMode.MIRROR,Shader.TileMode.MIRROR);
        bgdrawable.setGravity(Gravity.CENTER);
        YourView.setBackgroundDrawable(bgdrawable);
        
This in your cpp

    Main.cpp

    {OBFUSCATE("BgImage"), OBFUSCATE("()Ljava/lang/String;"), reinterpret_cast<void *>(BgImage)},



Add this in  Your Menu.h 

jstring BgImage(JNIEnv *env, jobject thiz) {
    iconValid = true;

    return env->NewStringUTF(
" Your Link");   
            }
