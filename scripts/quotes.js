(function () {
    var quotes = [{
        text: "<q>Never tell everything you know….</q><br />- Roger H. Lincoln"
    }, {
        text: "<q>Never underestimate the determination of a kid who is time-rich and cash-poor.</q><br />- Cory Doctorow, Little Brother"
    }, {
        text: "<q>Human Stupidity, that’s why Hackers always win.</q><br />- Med Amine Khelifi"
    }, {
        text: "<q>Do you think the Chinese think twice about hiring a hacker with a mohawk or a tattooed face? No.</q><br />- John McAfee"
    }, {
        text: "<q>If debugging is the process of removing software bugs, then programming must be the process of putting them in.</q><br />- Edsger Dijkstra"
    }, {
        text: "<q>The use of COBOL cripples the mind; its teaching should, therefore, be regarded as a criminal offense.</q><br />- Edsger Dijkstra"
    }, {
        text: "<q>I think computer viruses should count as life. I think it says something about human nature that the only form of life we have created so far is purely destructive. We&#8217;ve created life in our own image.</q><br />- Stephen Hawking"
    }, {
        text: "<q>Computers are useless. They can only give you answers.</q><br />- Pablo Picasso"
    }, {
        text: "<q>If it works, it&#8217;s beautiful.</q><br />- Stephen Hawes"
    }, {
        text: "<q>Beware of bugs in the above code; I have only proved it correct, not tried it.</q><br />- Donald Knuth"
    }];

    var quote = quotes[Math.floor(Math.random() * quotes.length)];
    document.getElementById("quote").innerHTML = '<aside>' + quote.text + '</aside>';
})();