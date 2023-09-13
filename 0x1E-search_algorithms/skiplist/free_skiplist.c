{"payload":{"allShortcutsEnabled":false,"fileTree":{"skiplist":{"items":[{"name":"create_skiplist.c","path":"skiplist/create_skiplist.c","contentType":"file"},{"name":"free_skiplist.c","path":"skiplist/free_skiplist.c","contentType":"file"},{"name":"print_skiplist.c","path":"skiplist/print_skiplist.c","contentType":"file"}],"totalCount":3},"":{"items":[{"name":"listint","path":"listint","contentType":"directory"},{"name":"skiplist","path":"skiplist","contentType":"directory"}],"totalCount":2}},"fileTreeProcessingTime":3.239685,"foldersToFetch":[],"reducedMotionEnabled":null,"repo":{"id":87369153,"defaultBranch":"master","name":"0x1D.c","ownerLogin":"alx-tools","currentUserCanPush":false,"isFork":false,"isEmpty":false,"createdAt":"2017-04-06T00:37:01.000Z","ownerAvatar":"https://avatars.githubusercontent.com/u/13408012?v=4","public":true,"private":false,"isOrgOwned":true},"symbolsExpanded":false,"treeExpanded":true,"refInfo":{"name":"master","listCacheKey":"v0:1491439023.0","canEdit":false,"refType":"branch","currentOid":"dcd867f9c52905e725209ebb1294f3003da0b234"},"path":"skiplist/free_skiplist.c","currentUser":null,"blob":{"rawLines":["#include <stdlib.h>","#include \"search_algos.h\"","","/**"," * free_skiplist - Deallocates a singly linked list"," *"," * @list: Pointer to the linked list to be freed"," */","void free_skiplist(skiplist_t *list)","{","\tskiplist_t *node;","","\tif (list)","\t{","\t\tnode = list->next;","\t\tfree(list);","\t\tfree_skiplist(node);","\t}","}"],"stylingDirectives":[[{"start":0,"end":8,"cssClass":"pl-k"},{"start":9,"end":19,"cssClass":"pl-s"}],[{"start":0,"end":8,"cssClass":"pl-k"},{"start":9,"end":25,"cssClass":"pl-s"}],[],[{"start":0,"end":3,"cssClass":"pl-c"}],[{"start":0,"end":51,"cssClass":"pl-c"}],[{"start":0,"end":2,"cssClass":"pl-c"}],[{"start":0,"end":48,"cssClass":"pl-c"}],[{"start":0,"end":3,"cssClass":"pl-c"}],[{"start":0,"end":4,"cssClass":"pl-smi"},{"start":5,"end":18,"cssClass":"pl-en"},{"start":19,"end":29,"cssClass":"pl-smi"},{"start":30,"end":31,"cssClass":"pl-c1"},{"start":31,"end":35,"cssClass":"pl-s1"}],[],[{"start":1,"end":11,"cssClass":"pl-smi"},{"start":12,"end":13,"cssClass":"pl-c1"},{"start":13,"end":17,"cssClass":"pl-s1"}],[],[{"start":1,"end":3,"cssClass":"pl-k"},{"start":5,"end":9,"cssClass":"pl-s1"}],[],[{"start":2,"end":6,"cssClass":"pl-s1"},{"start":7,"end":8,"cssClass":"pl-c1"},{"start":9,"end":13,"cssClass":"pl-s1"},{"start":13,"end":15,"cssClass":"pl-c1"},{"start":15,"end":19,"cssClass":"pl-c1"}],[{"start":2,"end":6,"cssClass":"pl-en"},{"start":7,"end":11,"cssClass":"pl-s1"}],[{"start":2,"end":15,"cssClass":"pl-en"},{"start":16,"end":20,"cssClass":"pl-s1"}],[],[]],"csv":null,"csvError":null,"dependabotInfo":{"showConfigurationBanner":false,"configFilePath":null,"networkDependabotPath":"/alx-tools/0x1D.c/network/updates","dismissConfigurationNoticePath":"/settings/dismiss-notice/dependabot_configuration_notice","configurationNoticeDismissed":null,"repoAlertsPath":"/alx-tools/0x1D.c/security/dependabot","repoSecurityAndAnalysisPath":"/alx-tools/0x1D.c/settings/security_analysis","repoOwnerIsOrg":true,"currentUserCanAdminRepo":false},"displayName":"free_skiplist.c","displayUrl":"https://github.com/alx-tools/0x1D.c/blob/master/skiplist/free_skiplist.c?raw=true","headerInfo":{"blobSize":"295 Bytes","deleteInfo":{"deleteTooltip":"You must be signed in to make or propose changes"},"editInfo":{"editTooltip":"You must be signed in to make or propose changes"},"ghDesktopPath":"https://desktop.github.com","gitLfsPath":null,"onBranch":true,"shortPath":"ae19704","siteNavLoginPath":"/login?return_to=https%3A%2F%2Fgithub.com%2Falx-tools%2F0x1D.c%2Fblob%2Fmaster%2Fskiplist%2Ffree_skiplist.c","isCSV":false,"isRichtext":false,"toc":null,"lineInfo":{"truncatedLoc":"19","truncatedSloc":"17"},"mode":"file"},"image":false,"isCodeownersFile":null,"isPlain":false,"isValidLegacyIssueTemplate":false,"issueTemplateHelpUrl":"https://docs.github.com/articles/about-issue-and-pull-request-templates","issueTemplate":null,"discussionTemplate":null,"language":"C","languageID":41,"large":false,"loggedIn":false,"newDiscussionPath":"/alx-tools/0x1D.c/discussions/new","newIssuePath":"/alx-tools/0x1D.c/issues/new","planSupportInfo":{"repoIsFork":null,"repoOwnedByCurrentUser":null,"requestFullPath":"/alx-tools/0x1D.c/blob/master/skiplist/free_skiplist.c","showFreeOrgGatedFeatureMessage":null,"showPlanSupportBanner":null,"upgradeDataAttributes":null,"upgradePath":null},"publishBannersInfo":{"dismissActionNoticePath":"/settings/dismiss-notice/publish_action_from_dockerfile","dismissStackNoticePath":"/settings/dismiss-notice/publish_stack_from_file","releasePath":"/alx-tools/0x1D.c/releases/new?marketplace=true","showPublishActionBanner":false,"showPublishStackBanner":false},"renderImageOrRaw":false,"richText":null,"renderedFileInfo":null,"shortPath":null,"tabSize":8,"topBannersInfo":{"overridingGlobalFundingFile":false,"globalPreferredFundingPath":null,"repoOwner":"alx-tools","repoName":"0x1D.c","showInvalidCitationWarning":false,"citationHelpUrl":"https://docs.github.com/en/github/creating-cloning-and-archiving-repositories/creating-a-repository-on-github/about-citation-files","showDependabotConfigurationBanner":false,"actionsOnboardingTip":null},"truncated":false,"viewable":true,"workflowRedirectUrl":null,"symbols":{"timedOut":false,"notAnalyzed":false,"symbols":[{"name":"free_skiplist","kind":"function","identStart":164,"identEnd":177,"extentStart":164,"extentEnd":195,"fullyQualifiedName":"free_skiplist","identUtf16":{"start":{"lineNumber":8,"utf16Col":5},"end":{"lineNumber":8,"utf16Col":18}},"extentUtf16":{"start":{"lineNumber":8,"utf16Col":5},"end":{"lineNumber":8,"utf16Col":36}}}]}},"copilotInfo":null,"csrf_tokens":{"/alx-tools/0x1D.c/branches":{"post":"zO53moChN8XhM6BIjZM-Wt2pWIcaOX9w4JzQTueCmsdJmohxsbessafE5NsQxDfE17l3oQaojAFbRd8oXeWLWQ"},"/repos/preferences":{"post":"W2dxm8ILE4uliqfuS22JjnDF51M1jus8tE6reaar5qLUQAxhRCGthlf2AstdfJnTj7EdbP7tEI2KRoDk6qWKfQ"}}},"title":"0x1D.c/skiplist/free_skiplist.c at master · alx-tools/0x1D.c"}