function solution(genres, plays) {
    let tmp = [];
    let t = {};
    let v = {};
    let answer = [];
    for(let i=0;i<genres.length;i++)
        t[`${genres[i]}`] = v[`${genres[i]}`] = 0;
    for(let i=0;i<plays.length;i++)t[`${genres[i]}`] += plays[i];
    for(let i=0;i<plays.length;i++)tmp.push({genre:genres[i], play:plays[i], idx:i,cnt : t[`${genres[i]}`]});
    tmp.sort((a,b)=>{
        return b["cnt"]<a["cnt"] ? -1 : b["cnt"]>a["cnt"] ? 1 : 
                b["play"]<a["play"] ? -1 : b["play"]>a["play"] ? 1 :
                b["idx"]<a["idx"]? 1 : b["idx"]>a["idx"] ? -1 : 0;
    })
    
    for(let i=0;i<tmp.length;i++){
        if(v[`${tmp[i]["genre"]}`]==2)continue;
        v[`${tmp[i]["genre"]}`]++;
        answer.push(tmp[i]["idx"]);
    }
    return answer;
}