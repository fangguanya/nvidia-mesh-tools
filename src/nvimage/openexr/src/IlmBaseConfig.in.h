//
// Define and set to 1 if the target system has POSIX thread support
// and you want IlmBase to use it for multithreaded file I/O.
//

#cmakedefine HAVE_PTHREAD 1

//
// Define and set to 1 if the target system supports POSIX semaphores
// and you want OpenEXR to use them; otherwise, OpenEXR will use its
// own semaphore implementation.
//

#cmakedefine HAVE_POSIX_SEMAPHORES 1

