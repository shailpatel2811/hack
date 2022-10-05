JavascriptExecutor js = (JavascriptExecutor) driver;

    while(countdown <= 15) {
        //countdown should be my defined limit of time
        js.executeScript("window.scrollTo(0, document.body.scrollHeight);");
    }
