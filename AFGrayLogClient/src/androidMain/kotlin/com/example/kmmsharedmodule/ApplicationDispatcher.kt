package com.example.kmmsharedmodule

import kotlinx.coroutines.CoroutineDispatcher
import kotlinx.coroutines.Dispatchers



actual val ApplicationDispatcher: CoroutineDispatcher = Dispatchers.Default
