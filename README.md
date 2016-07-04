# BugReport_QScintilla2_AutoComplete

This repository is the project reproducing the following 2 probelms in QScintilla2-2.9.2.

- Auto completion method list is not filtered at current context.


![Method completion1 (expected)](/images/method-completion-expected.png "Method completion1 (expected)")
![Method completion1 (current)](/images/method-completion-curret.png "Method completion1 (current)")

![Method completion2 (expected)](/images/method-completion2-expected.png "Method completion2 (expected)")
![Method completion2 (current)](/images/method-completion2-curret.png "Method completion2 (current)")

- Call tip is incorrectly trimmed at setCallTipStyle(CallTipsContext).

![Call tip (expected)](/images/calltip-expected.png "Call tip (expected)")
![Call tip (current)](/images/calltip-current.png "Call tip (current)")

