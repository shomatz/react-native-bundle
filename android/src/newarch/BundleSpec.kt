package com.bundle

import com.facebook.react.bridge.ReactApplicationContext

abstract class BundleSpec internal constructor(context: ReactApplicationContext) :
  NativeBundleSpec(context) {
}
