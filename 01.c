fetch("https://api.service.gameeapp.com/", {
    "headers" : {
        "accept" : "*/*",
        "accept-language" : "ru,en;q=0.9",
        "authorization" : "Bearer eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJleHAiOiIxNjk4MDkwMzgxIiwidXNlcklkIjozODc1MDk3NCwiaW5zdGFsbFV1aWQiOiJlOGQ0NjBmNS1mNWIyLTRiOWUtOWNhMi0yZjRlNWU0YTQzNmUiLCJ0eXBlIjoiYXV0aGVudGljYXRpb25Ub2tlbiIsImF1dGhvcml6YXRpb25MZXZlbCI6ImJvdCIsInBsYXRmb3JtIjoiYm90LXRlbGVncmFtIn0.2z_iSqbsNbB91PjMDQ_HtyTgcqCsp5sYgvZGQyEyEZo",
        "client-language" : "en",
        "content-type" : "text/plain;charset=UTF-8",
        "sec-ch-ua" : "\"Chromium\";v=\"116\", \"Not)A;Brand\";v=\"24\", \"YaBrowser\";v=\"23\"",
        "sec-ch-ua-mobile" : "?0",
        "sec-ch-ua-platform" : "\"macOS\"",
        "sec-fetch-dest" : "empty",
        "sec-fetch-mode" : "cors",
        "sec-fetch-site" : "cross-site",
        "x-install-uuid" : "e8d460f5-f5b2-4b9e-9ca2-2f4e5e4a436e"
    },
    "referrer" : "https://prizes.gamee.com/",
    "referrerPolicy" : "strict-origin-when-cross-origin",
    "body" : "{\"jsonrpc\":\"2.0\",\"id\":\"game.saveWebGameplay\",\"method\":\"game.saveWebGameplay\",\"params\":{\"gameplayData\":{\"gameId\":185,\"score\":13237,\"playTime\":52,\"gameUrl\":\"/game-bot/CqlO4bdma-3365c8cd093014f29f20ffab8dfca4191fafd3a9\",\"releaseNumber\":3,\"replayVariant\":null,\"replayDataChecksum\":null,\"replayData\":null,\"createdTime\":\"2023-10-23T21:59:38+03:00\",\"metadata\":{\"gameplayId\":56},\"checksum\":\"8a48292219f5725b920817bb131e4aca\",\"isSaveState\":false,\"gameStateData\":null,\"gameplayOrigin\":\"game\"}}}",
    "method" : "POST",
    "mode" : "cors",
    "credentials" : "include"
});