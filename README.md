# BugReport_QScintilla2_AutoComplete

This repository is the project reproducing the following 2 probelms in QScintilla2_gpl-2.9.2.

- Auto completion method list is not filtered by the current context.
  - Case 1
  ![Method completion1 (expected)](/images/method-completion-expected.png "Method completion1 (expected)")
  ![Method completion1 (current)](/images/method-completion-current.png "Method completion1 (current)")

  - Case 2
    ![Method completion2 (expected)](/images/method-completion2-expected.png "Method completion2 (expected)")
    ![Method completion2 (current)](/images/method-completion2-current.png "Method completion2 (current)")

  - FYI
    Method list after pressing separator is displayed correctly.
    ![Method completion3 (current)](/images/method-completion2-separator-current.png "Method completion3 (current)")

- Call tip is incorrectly trimmed at setCallTipStyle(CallTipsContext).

![Call tip (expected)](/images/calltip-expected.png "Call tip (expected)")
![Call tip (current)](/images/calltip-current.png "Call tip (current)")

