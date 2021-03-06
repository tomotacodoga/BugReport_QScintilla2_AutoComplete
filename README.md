# BugReport of QScintilla2 AutoComplete/CallTip

This repository is the project reproducing the following 2 probelms in QScintilla2_gpl-2.9.2.
[Patch](/patch.txt "Patch") is attached to fix them.

1. Auto completion method list is not filtered by the current context.
  - Case 1
    > ![Method completion1 (expected)](/images/method-completion-expected.png "Method completion1 (expected)")
    > ![Method completion1 (current)](/images/method-completion-current.png "Method completion1 (current)")

  - Case 2
    > ![Method completion2 (expected)](/images/method-completion2-expected.png "Method completion2 (expected)")
    > ![Method completion2 (current)](/images/method-completion2-current.png "Method completion2 (current)")

  - Method list after pressing separator is displayed correctly.
    > ![Method completion3 (current)](/images/method-completion2-separator-current.png "Method completion3 (current)")

2. Call tip is incorrectly trimmed at setCallTipStyle(CallTipsContext).
  > ![Call tip (expected)](/images/calltip-expected.png "Call tip (expected)")
  > ![Call tip (current)](/images/calltip-current.png "Call tip (current)")

3. (Added at 7/12/2016) Call tip is not filtered by the current context.
[Patch-calltips](/patch-calltips.txt "Patch-calltips") is attached to fix it.

  > ![Call tip2 (expected)](/images/calltip2-expected.png "Call tip2 (expected)")
  > ![Call tip2 (current)](/images/calltip2-current.png "Call tip2 (current)")

4. (Added at 7/12/2016) [Patch-deleteChar](/patch-deleteChar.txt "Patch-deleteChar") is attached
to add methods for deleting chars.
